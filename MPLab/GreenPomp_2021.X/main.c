 /**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18323
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <xc.h>
#include "TM1640.h"

#define ADC_VSS 60
#define VoltageLimit 613L // 1.0V相当

unsigned long waitTimeCounter=0;
unsigned long target_count;
unsigned char fireFlg=0;

/*
                        Function
 */

unsigned char voltage_index(){
    unsigned int voltage = (unsigned int)(50U * ADC_GetConversion(ADC) / 1024U) ; // レファレンス電圧は5.0V
    if ( voltage >= 42 ) { // 1.4
        return (1);
    } else if (voltage >= 39) { // 1.3
        return (2);
    } else if (voltage >= 36) { // 1.2
        return (3);
    } else if (voltage >= 33) { // 1.1
        return (4);
    } else if (voltage >= 30) { // 1.0
        return (5);
    } else { // 1.0
        return (0);
    }
}

void TimeCheck_ISR() {
    waitTimeCounter++;
    if(  waitTimeCounter >= target_count ){ // 時間到来
        waitTimeCounter=0;
        fireFlg=1;
    }
}

/*
                         Main application
 */

void main(void)
{
    unsigned uint16_t T0ReloadVal1 = (unsigned int)(TMR0H << 8U) | TMR0L;
    unsigned uint16_t delta = (0xFFFF-T0ReloadVal1) >> 3 ; // 約0.25sec;
    unsigned uint16_t timer0ReloadVal16bit2 = 2 * delta + T0ReloadVal1; // 0.50 sec
    unsigned uint16_t timer0ReloadVal16bit3 = 3 * delta + T0ReloadVal1; // 0.25 sec

    unsigned char batLowFlg=0;
    unsigned long adc_integration=0;
    unsigned long target_integration=0;
    adc_result_t adcCounts;
    unsigned int vol_counts=0;
    unsigned int delay_counts=0;

    const unsigned long  timeUnitH=3600;
    // initialize the device
    SYSTEM_Initialize();
    TM1640_init();
    TM1640_diplayOFF();
    TM1640_LEDarrayOFF(); // LED

    // initialize Interrupt Function
    TMR1_SetInterruptHandler(TimeCheck_ISR);
    
    
//    delta = (0xFFFF-T0ReloadVal1) >> 3 ; // 約0.25sec
//    timer0ReloadVal16bit2 = 2 * delta + T0ReloadVal1; // 0.50 sec
//    timer0ReloadVal16bit3 = 3 * delta + T0ReloadVal1; // 0.25 sec

    /*************/
    /* 電圧(>3V) */
    /*************/
    TM1640_LEDarray(1); // LED-1
    adcCounts = ADC_GetConversion(ADC);
    TM1640_dispVoltage(adcCounts);
    if(adcCounts<VoltageLimit) {
        while(1) {
            TM1640_dispLowBat();
        }
    }
    __delay_ms(2000);
    TM1640_diplayOFF();
    TM1640_LEDarray(0); // LEDOFF

    /*************/
    /* 水やり秒数 */
    /*************/
    unsigned char sec=0;
    unsigned char waterCounts=0;
    TM1640_LEDarray(2); // LED-2
    PIR0bits.TMR0IF=0;
    TM1640_dispINT(0);
    adc_integration = 0;
    waterCounts = 0;
    while (1) {
        // 増加ボタンが押された場合
        if (INC_GetValue()==0) {
            MOTOR_SetHigh(); // 注水開始
            TMR0_WriteTimer(timer0ReloadVal16bit3);   // タイマーリセット 
            TMR0_StartTimer(); //タイマースタート
            TM1640_dispINT(sec); // 時間表示
            while(INC_GetValue()==0){// 押されている限り続ける
                if (PIR0bits.TMR0IF){ // 0.25sごとに電圧測定
                    adcCounts = ADC_GetConversion(ADC);
                    adc_integration = adc_integration + adcCounts;
                    waterCounts=waterCounts+1;
                    sec=waterCounts/4;
                    TM1640_dispINT(sec); // 時間表示
                    PIR0bits.TMR0IF=0;
                    TMR0_WriteTimer(timer0ReloadVal16bit3); // タイマーリセット
                }
            }
            MOTOR_SetLow(); // 注水停止
            TMR0_WriteTimer(timer0ReloadVal16bit3); // タイマーリセット       
            PIR0bits.TMR0IF=0;
            TMR0_StopTimer(); // タイマーストップ
        }
        // 決定ボタンが押された場合
        if (ENT_GetValue() + ENT_GetValue() + ENT_GetValue()==0) {
            __delay_ms(300);
            break; // ループアウト
        }
    }
    target_integration = adc_integration;
    TM1640_diplayOFF();
    TM1640_LEDarray(0); // LEDOFF

    /*************/
    /* 日数間隔  */
    /*************/
    struct interval_setting {
    unsigned int hour;    
    unsigned char digit_high;
    unsigned char digit_low;
    unsigned char dot;
    };
    const static struct interval_setting interval[]={
        { 12, 0, 5, 1}, // 0:0.5 day
        { 24, 0, 1, 0}, // 1:  1 day
        { 48, 0, 2, 0}, // 2:  2 days
        { 36, 0, 3, 0}, // 3:  3 days
        {168, 0, 7, 0}, // 4:  7 days
        {336, 1, 4, 0}  // 5: 14 days
    };
    TM1640_LEDarray(3); // LED-3
    PIR0bits.TMR0IF=0;
    char index=0;        
    TM1640_dispDEC(interval[index].digit_high,interval[index].digit_low,interval[index].dot);
    while (1) {
        // インクリメントボタンが押された場合
        if (INC_GetValue() + INC_GetValue() + INC_GetValue()==0){
            if (index < 5) {
                index++;
                __delay_ms(200);
            } else {
                index=0;
                __delay_ms(200);
            }
        TM1640_dispDEC(interval[index].digit_high,interval[index].digit_low,interval[index].dot);
        }
        // 決定ボタンが押された場合
        if (ENT_GetValue() + ENT_GetValue() +  ENT_GetValue()==0) {
            target_count=(unsigned long)(interval[index].hour*timeUnitH);
            __delay_ms(300);
            break; // ループアウト
        }
    } 
    TM1640_diplayOFF();
    TM1640_LEDarray(0); // LEDOFF

    /*************/
    /* 初回待時間 */
    /*************/
    TM1640_LEDarray(4); // LED-3
    TM1640_dispINT(0); // display default value
    while (1) {
    BEGIN:        
        // インクリメントボタンが押された場合
        if (INC_GetValue() + INC_GetValue() + INC_GetValue()==0){
            TMR0_Reload(); //タイマーリセット
            TMR0_StartTimer(); //タイマースタート
            while(1){
                // （１）長押しの場合
                if (PIR0bits.TMR0IF) {          // 1秒以上経過
                    PIR0bits.TMR0IF=0;
                    delay_counts++;
                    if (delay_counts > 24) delay_counts=0;
                    TM1640_dispINT(delay_counts); // 7セグ表示
                    TMR0_WriteTimer(timer0ReloadVal16bit2);// タイマーリセット 
                    while (1) {
                        if(PIR0bits.TMR0IF){    // さらに0.25秒以上経過
                            PIR0bits.TMR0IF=0;
                            TMR0_WriteTimer(timer0ReloadVal16bit3);// タイマーリセット 
                            delay_counts++;
                            if (delay_counts > 24) delay_counts=0;
                            TM1640_dispINT(delay_counts); // 7セグ表示
                        }
                        if(INC_GetValue()+INC_GetValue()+INC_GetValue()==3){// 長押し終了
                            TMR0_StopTimer(); // タイマーストップ
                            goto BEGIN;        // 最初に戻る
                        }
                    }
                }
                // （２）クリックの場合
                if (INC_GetValue()+ INC_GetValue()+ INC_GetValue()==0){
                    __delay_ms(200);
                    delay_counts++;
                    if (delay_counts > 24) delay_counts=0;
                    TM1640_dispINT(delay_counts); // 表示関数を呼ぶ
                    TMR0_StopTimer();
                    PIR0bits.TMR0IF=0;
                    TMR0_WriteTimer(timer0ReloadVal16bit3);   // タイマーリセット 
                    goto BEGIN;              // 最初に戻る
                }
            }
        }
        // 決定ボタンが押された場合
        if (ENT_GetValue()+ ENT_GetValue()+ ENT_GetValue()==0) {
            __delay_ms(300);
            break; // ループアウト
        }
    } 
    TMR0_StopTimer(); // タイマーストップ
    waitTimeCounter=target_count - (unsigned long)(delay_counts*timeUnitH); 
    TM1640_diplayOFF();
    TM1640_LEDarray(0); // LEDOFF

    /**************/
    /* 全設定OK？ */
    /**************/
    TM1640_LEDarray(5); // LED-5
    PIR0bits.TMR0IF=1;
    unsigned char parity=0;
    TMR0_WriteTimer(timer0ReloadVal16bit3); // タイマーリセット
    TMR0_StartTimer(); //タイマースタート
    while(1){
        if (PIR0bits.TMR0IF){ // 0.25sごとにLED点滅
            if (parity) {
                TM1640_LEDarray(0); 
            } else {
                TM1640_LEDarray(5);                 
            }
            parity ^= 1;
            TMR0_Reload(); //タイマーリセット
            TMR0_StartTimer(); //タイマースタート
            PIR0bits.TMR0IF=0;
        }
        // 決定ボタンが押された場合
        if (ENT_GetValue()+ ENT_GetValue()+ ENT_GetValue()==0) {
            __delay_ms(300);
            break; // ループアウト
        }       
    }
    PIR0bits.TMR0IF=0;
    TMR0_StopTimer(); // タイマーストップ
    TM1640_diplayOFF();
    TM1640_LEDarray(0); // LEDOFF    
 
    /* 時間になるまで繰り返し待つ */
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    // Enable the Peripheral Interrupts
    TMR1_StartTimer();
    TMR1_Reload();
    unsigned char level=0;
    unsigned int vt=0;

    level = voltage_index();    
    while (1)
    {
        SLEEP();
        if(batLowFlg) {
            while(1) {
                TM1640_dispLowBat();
            }
        }
        if(fireFlg){
            MOTOR_SetHigh(); // 注水開始
            TMR0_WriteTimer(timer0ReloadVal16bit3);   // タイマーリセット 
            TMR0_StartTimer(); //タイマースタート
            adc_integration=0;
            PIR0bits.TMR0IF=1;
            while(adc_integration < target_integration){// ターゲットに到達するまで続ける
                if (PIR0bits.TMR0IF){ // 0.25sごとに電圧測定
                    adcCounts = ADC_GetConversion(ADC);
                    adc_integration = adc_integration + adcCounts;
                    TM1640_dispVoltage(adcCounts);
                    TMR0_WriteTimer(timer0ReloadVal16bit3); // タイマーリセット
                    PIR0bits.TMR0IF=0;
                    if(adcCounts<VoltageLimit) batLowFlg=1;
                }
                continue;
            }
            MOTOR_SetLow(); // 注水停止
            TMR0_StopTimer();      // タイマーストップ
            TM1640_diplayOFF();
            fireFlg=0;
        }

        if (vt > 3600) {
            level = voltage_index();
            if (level==0){
                batLowFlg=1;
            }
            vt = 0;
        } else {
            vt=vt+1;
        }
        if (vt%2==0) {
            TM1640_LEDarray(level);
//        TM1640_dispDot(); // 動作確認用のDot表示
            __delay_ms(5);
            TM1640_LEDarray(0);
//        TM1640_diplayOFF();
        }
    }
}
/**
 End of File
*/
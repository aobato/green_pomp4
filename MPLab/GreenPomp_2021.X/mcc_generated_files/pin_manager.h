/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18323
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set INC aliases
#define INC_TRIS                 TRISAbits.TRISA1
#define INC_LAT                  LATAbits.LATA1
#define INC_PORT                 PORTAbits.RA1
#define INC_WPU                  WPUAbits.WPUA1
#define INC_OD                   ODCONAbits.ODCA1
#define INC_ANS                  ANSELAbits.ANSA1
#define INC_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define INC_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define INC_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define INC_GetValue()           PORTAbits.RA1
#define INC_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define INC_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define INC_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define INC_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define INC_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define INC_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define INC_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define INC_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set ENT aliases
#define ENT_TRIS                 TRISAbits.TRISA2
#define ENT_LAT                  LATAbits.LATA2
#define ENT_PORT                 PORTAbits.RA2
#define ENT_WPU                  WPUAbits.WPUA2
#define ENT_OD                   ODCONAbits.ODCA2
#define ENT_ANS                  ANSELAbits.ANSA2
#define ENT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ENT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ENT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ENT_GetValue()           PORTAbits.RA2
#define ENT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ENT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ENT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ENT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ENT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define ENT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define ENT_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ENT_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()               do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()                do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()                do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()       do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()      do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set DIN aliases
#define DIN_TRIS                 TRISCbits.TRISC0
#define DIN_LAT                  LATCbits.LATC0
#define DIN_PORT                 PORTCbits.RC0
#define DIN_WPU                  WPUCbits.WPUC0
#define DIN_OD                   ODCONCbits.ODCC0
#define DIN_ANS                  ANSELCbits.ANSC0
#define DIN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DIN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DIN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DIN_GetValue()           PORTCbits.RC0
#define DIN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DIN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define DIN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define DIN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define DIN_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define DIN_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define DIN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define DIN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SCLK aliases
#define SCLK_TRIS                 TRISCbits.TRISC1
#define SCLK_LAT                  LATCbits.LATC1
#define SCLK_PORT                 PORTCbits.RC1
#define SCLK_WPU                  WPUCbits.WPUC1
#define SCLK_OD                   ODCONCbits.ODCC1
#define SCLK_ANS                  ANSELCbits.ANSC1
#define SCLK_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SCLK_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SCLK_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SCLK_GetValue()           PORTCbits.RC1
#define SCLK_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SCLK_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SCLK_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SCLK_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SCLK_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SCLK_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SCLK_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SCLK_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set NC1 aliases
#define NC1_TRIS                 TRISCbits.TRISC2
#define NC1_LAT                  LATCbits.LATC2
#define NC1_PORT                 PORTCbits.RC2
#define NC1_WPU                  WPUCbits.WPUC2
#define NC1_OD                   ODCONCbits.ODCC2
#define NC1_ANS                  ANSELCbits.ANSC2
#define NC1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define NC1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define NC1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define NC1_GetValue()           PORTCbits.RC2
#define NC1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define NC1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define NC1_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define NC1_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define NC1_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define NC1_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define NC1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define NC1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set NC2 aliases
#define NC2_TRIS                 TRISCbits.TRISC3
#define NC2_LAT                  LATCbits.LATC3
#define NC2_PORT                 PORTCbits.RC3
#define NC2_WPU                  WPUCbits.WPUC3
#define NC2_OD                   ODCONCbits.ODCC3
#define NC2_ANS                  ANSELCbits.ANSC3
#define NC2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define NC2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define NC2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define NC2_GetValue()           PORTCbits.RC3
#define NC2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define NC2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define NC2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define NC2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define NC2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define NC2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define NC2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define NC2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set ADC aliases
#define ADC_TRIS                 TRISCbits.TRISC4
#define ADC_LAT                  LATCbits.LATC4
#define ADC_PORT                 PORTCbits.RC4
#define ADC_WPU                  WPUCbits.WPUC4
#define ADC_OD                   ODCONCbits.ODCC4
#define ADC_ANS                  ANSELCbits.ANSC4
#define ADC_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define ADC_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define ADC_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define ADC_GetValue()           PORTCbits.RC4
#define ADC_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define ADC_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define ADC_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define ADC_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define ADC_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define ADC_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define ADC_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define ADC_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set MOTOR aliases
#define MOTOR_TRIS                 TRISCbits.TRISC5
#define MOTOR_LAT                  LATCbits.LATC5
#define MOTOR_PORT                 PORTCbits.RC5
#define MOTOR_WPU                  WPUCbits.WPUC5
#define MOTOR_OD                   ODCONCbits.ODCC5
#define MOTOR_ANS                  ANSELCbits.ANSC5
#define MOTOR_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define MOTOR_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define MOTOR_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define MOTOR_GetValue()           PORTCbits.RC5
#define MOTOR_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define MOTOR_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define MOTOR_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define MOTOR_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define MOTOR_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define MOTOR_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define MOTOR_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define MOTOR_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
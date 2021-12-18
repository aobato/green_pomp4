#include "TM1640.h"
#include "mcc_generated_files/mcc.h"

void TM1640_init(){
    SCLK_SetHigh();
    DIN_SetHigh();
};

void TM1640_sendByte(unsigned char data){
    __delay_us(500); // contiune SCLK=1 minimum 400nsec width
    for(char i=0;i<8;i++) {
        SCLK_SetLow();
        __delay_us(150);  // make change DIN with some delay
        if (data&1) { // change DIN during SCLK LOW
            DIN_SetHigh();
        } else {
            DIN_SetLow();
        }
        __delay_us(350);  // keep SCLK minimum 400nsec width
        SCLK_SetHigh(); // always end with SCLK HIGH
        data >>=1;
        __delay_us(500);  // read DIN during SCLK HIGH
    }
    SCLK_SetLow(); // Last bit
    __delay_us(150);  // read DIN during SCLK HIGH
    DIN_SetLow();
__delay_us(500);  // read DIN during SCLK HIGH    
}

void TM1640_sendCommand(char command){
// start connection
    DIN_SetLow();
    TM1640_sendByte(command);
// end connection
    SCLK_SetLow();
    __delay_us(150);
    DIN_SetLow(); 
    __delay_us(350);
    SCLK_SetHigh();
    __delay_us(150);
    DIN_SetHigh(); 
    __delay_us(350);
}

void TM1640_sendAddress_and_Data(char adress, char data){
// start connection
    DIN_SetLow();
    TM1640_sendByte(adress);
    TM1640_sendByte(data);
    __delay_us(150);
// end connection
    SCLK_SetLow();
    __delay_us(150);
    DIN_SetLow(); 
    __delay_us(350);
    SCLK_SetHigh();
    __delay_us(150);
    DIN_SetHigh(); 
    __delay_us(350);
}

//void TM1640_dispDot(){
//    TM1640_sendCommand(FIXED_ADRESS_MODE);    
//    TM1640_sendAddress_and_Data( GRID_01, DOT);
//    TM1640_sendCommand(DISPLAY_ON);
//    TM1640_sendCommand(BRIGHTNESS_LO);
//}
void TM1640_dispINT(unsigned int value){
    unsigned char digit_low, digit_high;
    digit_low = value % 10;
    digit_high = value / 10;
    if (digit_high==0) digit_high=10; // do not display 0 in higher digit
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_01, NUMBER_FONT[digit_low]);
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_02, NUMBER_FONT[digit_high]);
    TM1640_sendCommand(BRIGHTNESS_HI);
    TM1640_sendCommand(DISPLAY_ON);
}

void TM1640_dispDEC(unsigned char digit_high, unsigned char digit_low, unsigned char dot){
    TM1640_sendCommand(FIXED_ADRESS_MODE);
    TM1640_sendAddress_and_Data( GRID_01, NUMBER_FONT[digit_low]);
    TM1640_sendCommand(FIXED_ADRESS_MODE);
    if (dot) {
        TM1640_sendAddress_and_Data( GRID_02, NUMBER_FONT[digit_high]|DOT);
    } else if (digit_high != 0) {
        TM1640_sendAddress_and_Data( GRID_02, NUMBER_FONT[digit_high]);        
    } else {
        TM1640_sendAddress_and_Data( GRID_02, NUMBER_FONT[10]); //先頭のゼロは非表示                 
    }
    TM1640_sendCommand(BRIGHTNESS_HI);
    TM1640_sendCommand(DISPLAY_ON);
}

void TM1640_dispVoltage(unsigned int value){
    unsigned char digit_low, digit_high, data;
    unsigned int voltage;
    voltage = (unsigned int)(50U * value / 1024U) ; // レファレンス電圧は5.0V
    digit_low = voltage % 10U;
    digit_high = voltage / 10U;
    data = (unsigned char)(NUMBER_FONT[digit_high]|DOT);
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_01, NUMBER_FONT[digit_low]);
    TM1640_sendCommand(DISPLAY_ON);
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_02, data);
}

void TM1640_dispLowBat(){
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_01, LO_BAT[1]);
    TM1640_sendAddress_and_Data( GRID_02, LO_BAT[0]);
    TM1640_sendCommand(DISPLAY_ON);
}

void TM1640_diplayOFF(void){
    unsigned char digit;
    digit=NUMBER_FONT[10];
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_01, digit );
    TM1640_sendAddress_and_Data( GRID_02, digit );
    TM1640_sendCommand(DISPLAY_OFF);
}

void TM1640_LEDarray(unsigned char value){
    unsigned char pattern;
    pattern=LED_PATTERN[value];
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_03, pattern);
    TM1640_sendCommand(BRIGHTNESS_LO);
    TM1640_sendCommand(DISPLAY_ON);    
}

void TM1640_LEDarrayOFF(void){
    unsigned char pattern;
    pattern=LED_PATTERN[0];
    TM1640_sendCommand(FIXED_ADRESS_MODE);    
    TM1640_sendAddress_and_Data( GRID_03, pattern);
    TM1640_sendCommand(DISPLAY_OFF);
}
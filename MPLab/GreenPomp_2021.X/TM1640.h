#ifndef TM1640_H
#define TM1640_H

// TM1640のコマンド
#define FIXED_ADRESS_MODE 0b01000100
#define DISPLAY_ON        0b10001111
#define DISPLAY_OFF       0b10000000
#define BRIGHTNESS_HI     0b10001111
#define BRIGHTNESS_LO     0b10001000
#define GRID_01 0b11000001
#define GRID_02 0b11000000
#define GRID_03 0b11000010

// 7セグキャラ
const unsigned char NUMBER_FONT[11]={
    0b00111111,//0: 0
    0b00000110,//1: 1
    0b01011011,//2: 2
    0b01001111,//3: 3
    0b01100110,//4: 4
    0b01101101,//5: 5
    0b01111101,//6: 6
    0b00000111,//7: 7
    0b01111111,//8: 8
    0b01101111,//9: 9
    0b00000000 //10: OFF
};
const unsigned char LO_BAT[3]={
  0b00111000,//L
  0b00111111 //O  
};
const unsigned char DOT=0b10000000;

// LED アレイ
const unsigned char LED_PATTERN[6]={
    0b00000000,//OFF
    0b00100000,//LED1
    0b00000001,//LED2
    0b00000010,//LED3
    0b01000000,//LED4
    0b10000000 //LED5
};

// 関数宣言
void TM1640_init();
void TM1640_sendByte(unsigned char data);
void TM1640_sendCommand(unsigned char command);
void TM1640_sendAddress_and_Data(unsigned char adress, unsigned char data);
//void TM1640_dispDot();
void TM1640_dispINT(unsigned int value);
void TM1640_dispDEC(unsigned char digit_high, unsigned char digit_low, unsigned char dot);
void TM1640_dispVoltage(unsigned int value);
void TM1640_diplayOFF();
void TM1640_dispLowBat();
void TM1640_LEDarrayOFF();
void TM1640_LEDarray(unsigned char value);


#endif // PIN_MANAGER_H
#include <xc.h>
#inlude"DigitalPin.h"
#include <pic16f18323.h>
#include <stdlib.h>
/*
void digitalInit(const char pin[]){
    unsigned char pn;
    unsigned char port;
    port = pin[0];
    pn = pin[1] & 0x0F; 
    //　ピン設定
    switch (port){
        case 'A':
            TRISA = TRISA & ~(1<<pn);   // デジタル出力モードにする
            ANSELA =  ANSELA & ~(1<<pn); // アナログオフにする
            WPUA = WPUA & ~(1<<pn); // プルアップしない
        case 'C':
            TRISC = TRISC & ~(1<<pn); // デジタル出力モードにする
            ANSELC =  ANSELC & ~(1<<pn); // アナログオフにする
            WPUC = WPUC & ~(1<<pn); // プルアップしない
    }
}
void digitalHigh(const char pin[]){
    unsigned char pn;
    unsigned char port;
    port = pin[0];
    pn = pin[1] & 0x0F; 
    //　ピン設定
    switch (port){
        case 'A':
            LATA = LATA|(1<<pn);   // ON
        case 'C':
            LATC = LATC|(1<<pn);   // ON
    }        
}

void digitalLow(const char pin[]){
    unsigned char pn;
    unsigned char port;
    port = pin[0];
    pn = pin[1] & 0x0F; 
    //　ピン設定
    switch (port){
        case 'A':
            LATA = LATA&~(1<<pn);   // OFF
        case 'C':
            LATC = LATC&~(1<<pn);   // OFF
    }        
}


bit digitalRead(char pin){
    int s,r;
    unsigned char pn;
    unsigned char port;
    port = pin[0];
    pn = pin[1] & 0x0F; 
    while(1){
        s=0;
        r=0;        
        for (char i=0; i<10; i++){
            switch(port){
                case 'A' :
                    r = (PORTA<<pin)&1;
                case 'C' :
                    r = (PORTC<<pin)&1;
            }
            s += r; 
        }
        if(s==0|s==10) {
            s=(s==10)?1:0;
            break; // 10回連続で同じ値なら認識
        }
    }
    return (s);
}
*/
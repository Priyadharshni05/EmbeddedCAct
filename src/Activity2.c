#include <util/delay.h>
#include "Activity2.h"

void ADC_Init()
{
    ADMUX=(1<<REFS0); //AREF=AVCC //01000000
    ADCSRA=(1<<ADEN) | (7<<ADPS0); //(1<<ADEN)=>Enable ADC|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)
}

uint16_t ReadADC(uint8_t ch)//00000000 00000000
{
    ADMUX&=0xf8; // To confirm the value is between 0-7 //11111000 & 01000000 = 01000000
    ch=ch&0b00000111; //00000000 & 00000111 = 00000000
    ADMUX|=ch;// 01000000 | 00000000 = 01000000
    ADCSRA|=(1<<ADSC);// To start the single bit conversion
    while(!(ADCSRA & (1<<ADIF)))
        ADCSRA|=(1<<ADIF); //11000111 ->1101111
    return ADC;
}

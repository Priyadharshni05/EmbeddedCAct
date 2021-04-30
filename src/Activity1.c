#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"

void port_init()
{
    DDRB|=(1<<PB0); //Port PB0->LED->Output
    DDRD&=~(1<<PD0);//Port PD0->Switch->Seated or not
    DDRD&=~(1<<PD2);//Port PD2->Switch->Heater on or not

    PORTD|=(1<<PD0);//Writing switch as 1(5V)
    PORTD|=(1<<PD2);//Writing switch as 1(5V)
}

int led_init()
{
        if((!(PIND & (1<<PD0)) && (!(PIND & (1<<PD2)))))
        {
            PORTB |=(1<<PB0);//LED On
            _delay_ms(2000);
            return 1;
        }
        else
        {
            PORTB &=~(1<<PB0);//LED Off
            _delay_ms(2000);
            return 0;
        }
}


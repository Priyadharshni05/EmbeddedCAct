#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"

void port_init()
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    DDRD&=~(1<<PD2);

    PORTD|=(1<<PD0);
    PORTD|=(1<<PD2);
    return 0;
}

int led_init()
{
        if((!(PIND & (1<<PD0)) && (!(PIND & (1<<PD2)))))
        {
            PORTB |=(1<<PB0);
            _delay_ms(2000);
            return 1;
        }
        else
        {
            PORTB &=~(1<<PB0);
            _delay_ms(2000);
            return 0;
        }
}


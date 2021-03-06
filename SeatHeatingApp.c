#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

#define F_CPU 16000000UL

int main(void)
{
    while(1)
    {
        port_init(); //Port Initialisation
        int status=0;
        status=led_init(); //LED ON and OFF
        if(status==1)
        {
            ADC_Init();
            Timer_Init();
            USART_init(103);
            uint16_t temp = 0;
			temp = ReadADC(0); //Storing the ADC Value
			_delay_ms(200);
			pwm_waveform(temp);	/*Generation of PWM according to the temperature value*/
			_delay_ms(200);
			USARTWritemsg(temp);/*Writing the Message on the Serial Monitor*/
        }
    }
    return 0;
}

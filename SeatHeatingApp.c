#include <avr/io.h>
#include <util/delay.h>
#include <Activity1.h>
int main(void)
{
    port_init();
    led ();
    return 0;
}

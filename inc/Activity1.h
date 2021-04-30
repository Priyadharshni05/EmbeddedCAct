#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

/** @brief port initialisation
 * @note define the switch and LED ports
 * @return void
 *
 */
void port_init(void);

/** @brief Controlling the LED (switching on/off the LED)
 *@note ON/OFF LED
 * @return int=>Status of the LED
 *
 */

int led(void);

#endif // ACTIVITY1_H_INCLUDED

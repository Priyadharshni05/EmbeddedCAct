#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL

/**
 * @brief Initializing the USART
 * 
 * @return void
 */
void USART_init(uint16_t);

/**
 * @brief USART Reads the msg from UDR
 * 
 * @return char => msg
 */
char USARTReadmsg();

/**
 * @brief USART writes the msg to UDR
 * 
 */
void USARTWritemsg(uint16_t);


#endif // ACTIVITY4_H_INCLUDED


#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

/**
 * @brief ADC Initialisation
 * @note Initialise the ADC 
 * @return void
 */
void ADC_Init(void);

/**
 * @brief Read the ADC Channel
 * 
 * @return uint16_t =>ADC Value=>Voltage converted to digital value
 */
uint16_t ReadADC(uint8_t);


#endif // ACTIVITY2_H_INCLUDED

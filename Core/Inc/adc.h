#ifndef INC_ADC_H_
#define INC_ADC_H_

#include "stm32l4xx_hal.h"

void ADC_Init(void);
uint32_t ADC_ReadRaw(void);
int ADC_ConvertToCelsius(uint32_t raw_value);

#endif /* INC_ADC_H_ */

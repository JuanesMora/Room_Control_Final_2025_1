#include "adc.h"

extern ADC_HandleTypeDef hadc1;  // Asegúrate que CubeMX lo haya generado

void ADC_Init(void) {
    // Ya está inicializado por CubeMX, no necesitas hacer nada aquí por ahora
}

uint32_t ADC_ReadRaw(void) {
    HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
    return HAL_ADC_GetValue(&hadc1);
}

#include "adc.h"

// Esta función convierte el valor crudo del ADC (de 0 a 4095) a temperatura en grados Celsius
int ADC_ConvertToCelsius(uint32_t raw_value) {
    // Escala lineal suponiendo que 0 corresponde a 0 °C y 4095 a 50 °C
    return (raw_value * 50) / 4095;
}


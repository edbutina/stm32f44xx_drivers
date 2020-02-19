/*
 * stm32f446xx_gpio_driver.c
 *
 *  Created on: Jan 31, 2020
 *      Author: edbutina
 */

#include "stm32f446xx_gpio_driver.h"

/*
 * Peripheral Clock Setup
 */

/*********************************************************************************
 * @fn				- GPIO_PeripClockControl
 *
 * @brief           - This function enables or disables peripheral clock for the givenGPIO port
 *
 * @param[in]		- base address of the gpio peripheral
 * @param[in]		-ENABLE or DISABLE macros
 * @param[in]		-
 *
 * @return			- none
 *
 * @Note			- none
 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{

}

/*
 * Peripheral Init/DeInit
 */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{

}
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{

}

/*
 * Data r/w
 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{

}
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{

}
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{

}
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/*
 * Interrupts
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EorDi)
{

}
void GPIO_IRQHandling(uint8_t PinNumber)
{

}

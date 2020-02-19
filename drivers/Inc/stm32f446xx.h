/*
 * stm32f446xx.h
 *
 *  Created on: Jan 26, 2020
 *      Author: edbutina
 */

#ifndef STM32F446XX_H_
#define STM32F446XX_H_
#include <stdint.h>

/*
 *  base addresses of flash and SRAM memories
 */

#define FLASH_BASEADDR			0x08000000U
#define SRAM1_BASEADDR			0x20000000U
#define SRAM2_BASEADDR			0x2001C000U
#define ROM_BASEADDR			0x1FFF0000U /*system memory under embedded flash memory */
#define SRAM					SRAM1_BASEADDR

/*
 *  base addresses apb and ahb peripherals
 */

#define PERIPH_BASE 			0x40000000U
#define APB1PERIPH_BASE  		PREIPH_BASE
#define APB2PERIPH_BASE			(PREIPH_BASE + 0x00010000U)
#define AHB1PERIPH_BASE			(PERIPH_BASE + 0x00020000U)
#define AHB2PERIPH_BASE			(PERIPH_BASE + 0x10000000U)
#define AHB3PERIPH_BASE			(PERIPH_BASE + 0x60001000U)

/*
 *  base addresses of needed peripherals on AHB1 bus
 */

#define GPIOA_BASEADDR			(AHB1PERIPH_BASE + 0x0000U)
#define GPIOB_BASEADDR			(AHB1PERIPH_BASE + 0x0400U)
#define GPIOC_BASEADDR			(AHB1PERIPH_BASE + 0x0800U)
#define GPIOD_BASEADDR			(AHB1PERIPH_BASE + 0x0C00U)
#define GPIOE_BASEADDR			(AHB1PERIPH_BASE + 0x1000U)
#define GPIOF_BASEADDR			(AHB1PERIPH_BASE + 0x1400U)
#define GPIOG_BASEADDR			(AHB1PERIPH_BASE + 0x1800U)
#define GPIOH_BASEADDR			(AHB1PERIPH_BASE + 0x1C00U)
#define RCC_BASEADDR			(AHB1PERIPH_BASE + 0x3800U)

/*
 *  base addresses of needed peripherals on APB1 bus
 */

#define SPI3_BASEADDR			(APB1PERIPH_BASE + 0x3C00U)
#define SPI2_BASEADDR			(APB1PERIPH_BASE + 0x3800U)
#define USART2_BASEADDR			(APB1PERIPH_BASE + 0x4400U)
#define USART3_BASEADDR			(APB1PERIPH_BASE + 0x4800U)
#define UART4_BASEADDR			(APB1PERIPH_BASE + 0x4C00U)
#define UART5_BASEADDR			(APB1PERIPH_BASE + 0x5000U)
#define I2C1_BASEADDR			(APB1PERIPH_BASE + 0x5400U)
#define I2C2_BASEADDR			(APB1PERIPH_BASE + 0x5800U)
#define I2C3_BASEADDR			(APB1PERIPH_BASE + 0x5C00U)

/*
 *  base addresses of needed peripherals on APB2 bus
 */

#define SPI1_BASEADDR			(APB2PERIPH_BASE + 0x3000U)
#define USART1_BASEADDR			(APB2PERIPH_BASE + 0x1000U)
#define USART6_BASEADDR			(APB2PERIPH_BASE + 0x1400U)
#define EXTI_BASEADDR			(APB2PERIPH_BASE + 0x3C00U)
#define SYSCFG_BASEADDR			(APB2PERIPH_BASE + 0x3800U)

/*
 * data structure definitions for peripheral registers
 */

typedef struct
{
	volatile uint32_t MODER; /* offset 0x00 */
	volatile uint32_t OTYPER; /* offset 0x04 */
	volatile uint32_t OSPEEDER; /* offset 0x08 */
	volatile uint32_t PUPDR; /* offset 0x0C */
	volatile uint32_t IDR; /* offset 0x10 */
	volatile uint32_t ODR; /* offset 0x14 */
	volatile uint32_t BSRR; /* offset 0x18 */
	volatile uint32_t LCKR; /* offset 0x1C */
	volatile uint32_t AFRL; /* offset 0x20 */
	volatile uint32_t AFRH; /* offset 0x24 */

} GPIO_RegDef_t;

typedef struct
{
	volatile uint32_t CR; /* offset 0x00 */
	volatile uint32_t PLLCFGR; /* offset 0x04 */
	volatile uint32_t CFGR; /* offset 0x08 */
	volatile uint32_t CIR; /* offset 0x0C */
	volatile uint32_t AHB1RSTR; /* offset 0x10 */
	volatile uint32_t AHB2RSTR; /* offset 0x14 */
	volatile uint32_t AHB3RSTR; /* offset 0x18 */
	volatile uint32_t APB1RSTR; /* offset 0x20 */
	volatile uint32_t APB2RSTR; /* offset 0x24 */
	volatile uint32_t AHB2ENR; /* offset 0x30 */
	volatile uint32_t AHB3ENR; /* offset 0x30 */
	volatile uint32_t APB1ENR; /* offset 0x30 */
	volatile uint32_t APB2ENR; /* offset 0x30 */
	volatile uint32_t AHB1LPENR; /* offset 0x30 */
	volatile uint32_t AHB2LPENR; /* offset 0x30 */
	volatile uint32_t AHB3LPENR; /* offset 0x30 */
	volatile uint32_t APB1LPENR; /* offset 0x30 */
	volatile uint32_t APB2LPENR; /* offset 0x30 */
	volatile uint32_t BDCR; /* offset 0x30 */
	volatile uint32_t SSCGR; /* offset 0x0C */
	volatile uint32_t PLLI2SCFGR; /* offset 0x0C */
	volatile uint32_t PLLSAICFGR; /* offset 0x0C */
	volatile uint32_t DCKCFGR; /* offset 0x0C */
	volatile uint32_t CKGATENR; /* offset 0x0C */
	volatile uint32_t DCKCFGR2; /* offset 0x0C */
} RCC_RegDef_t;

#define GPIOA 	((GPIO_RegDef_t*)(GPIOA_BASEADDR))
#define GPIOB 	((GPIO_RegDef_t*)(GPIOB_BASEADDR))
#define GPIOC 	((GPIO_RegDef_t*)(GPIOC_BASEADDR))
#define GPIOD 	((GPIO_RegDef_t*)(GPIOD_BASEADDR))
#define GPIOE 	((GPIO_RegDef_t*)(GPIOE_BASEADDR))
#define GPIOF 	((GPIO_RegDef_t*)(GPIOF_BASEADDR))
#define GPIOG 	((GPIO_RegDef_t*)(GPIOG_BASEADDR))
#define GPIOH 	((GPIO_RegDef_t*)(GPIOH_BASEADDR))

#define RCC 	((RCC_RegDef_t*)(RCC_BASEADDR))

/*
 * Clock enable macros for GPIOx peripherals
 */

#define GPIOA_PCLK_EN()	(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()	(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()	(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()	(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()	(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()	(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()	(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()	(RCC->AHB1ENR |= (1 << 7))

/*
 * Clock enable macros for I2Cx peripherals
 */

#define I2C1_PCLK_EN() (RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN() (RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN() (RCC->APB1ENR |= (1 << 23))


/*
 * Clock enable macros for SPIx peripherals
 */
#define SPI1_PCLK_EN() (RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN() (RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN() (RCC->APB1ENR |= (1 << 15))
#define SPI4_PCLK_EN() (RCC->APB2ENR |= (1 << 13))

/*
 * Clock enable macros for USARTx peripherals
 */
#define USART1_PCLK_EN() (RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN() (RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN() (RCC->APB1ENR |= (1 << 18))
#define USART4_PCLK_EN() (RCC->APB1ENR |= (1 << 19))
#define USART5_PCLK_EN() (RCC->APB1ENR |= (1 << 20))
#define USART6_PCLK_EN() (RCC->APB2ENR |= (1 << 5))

/*
 * Clock enable macros for SYSCFGx peripherals
 */
#define SYSCFG_PCLK_EN() (RCC->APB2ENR |= (1 << 14))


/*
 * Generic macros
 */
#define ENABLE 	0
#define DISABLE 1
#define SET 	ENABLE
#define RESET 	DISABLE
#define GPIO_PIN_SET	SET
#define GPIO_PIN_RESET	RESET
#endif /* STM32F446XX_H_ */

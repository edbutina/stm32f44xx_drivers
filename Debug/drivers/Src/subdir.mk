################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/Src/stm32f446xx_gpio_driver.c 

OBJS += \
./drivers/Src/stm32f446xx_gpio_driver.o 

C_DEPS += \
./drivers/Src/stm32f446xx_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/Src/stm32f446xx_gpio_driver.o: ../drivers/Src/stm32f446xx_gpio_driver.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DDEBUG -c -I../Inc -I"/home/edbutina/STM32CubeIDE/workspace_1.1.0/stm32f44xx_drivers/drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"drivers/Src/stm32f446xx_gpio_driver.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"


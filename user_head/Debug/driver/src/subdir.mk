################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../driver/src/stm32f411x_driver_gpio.c \
../driver/src/stm32f411x_driver_gpioconfig.c 

OBJS += \
./driver/src/stm32f411x_driver_gpio.o \
./driver/src/stm32f411x_driver_gpioconfig.o 

C_DEPS += \
./driver/src/stm32f411x_driver_gpio.d \
./driver/src/stm32f411x_driver_gpioconfig.d 


# Each subdirectory must supply rules for building sources it contributes
driver/src/%.o driver/src/%.su: ../driver/src/%.c driver/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-driver-2f-src

clean-driver-2f-src:
	-$(RM) ./driver/src/stm32f411x_driver_gpio.d ./driver/src/stm32f411x_driver_gpio.o ./driver/src/stm32f411x_driver_gpio.su ./driver/src/stm32f411x_driver_gpioconfig.d ./driver/src/stm32f411x_driver_gpioconfig.o ./driver/src/stm32f411x_driver_gpioconfig.su

.PHONY: clean-driver-2f-src


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LCD/LCD.c 

OBJS += \
./HAL/LCD/LCD.o 

C_DEPS += \
./HAL/LCD/LCD.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LCD/%.o HAL/LCD/%.su: ../HAL/LCD/%.c HAL/LCD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/Application" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/PC_Display" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/IR" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/Light" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/Keypad" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/EXTI" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/GPIO" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/RCC" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/SPI" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/UART" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/LCD" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-LCD

clean-HAL-2f-LCD:
	-$(RM) ./HAL/LCD/LCD.d ./HAL/LCD/LCD.o ./HAL/LCD/LCD.su

.PHONY: clean-HAL-2f-LCD


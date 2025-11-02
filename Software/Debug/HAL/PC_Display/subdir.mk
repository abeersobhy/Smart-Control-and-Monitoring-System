################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/PC_Display/PC_Display.c 

OBJS += \
./HAL/PC_Display/PC_Display.o 

C_DEPS += \
./HAL/PC_Display/PC_Display.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/PC_Display/%.o HAL/PC_Display/%.su: ../HAL/PC_Display/%.c HAL/PC_Display/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/Application" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/PC_Display" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/IR" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/Light" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/Keypad" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/EXTI" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/GPIO" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/RCC" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/SPI" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/STM32F103_MCAL/UART" -I"F:/Embedded/LearnInDepth/WS/SmartAccess_ControlSystem/HAL/LCD" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-PC_Display

clean-HAL-2f-PC_Display:
	-$(RM) ./HAL/PC_Display/PC_Display.d ./HAL/PC_Display/PC_Display.o ./HAL/PC_Display/PC_Display.su

.PHONY: clean-HAL-2f-PC_Display


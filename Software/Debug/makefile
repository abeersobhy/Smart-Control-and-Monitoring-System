################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include STM32F103_MCAL/UART/subdir.mk
-include STM32F103_MCAL/SPI/subdir.mk
-include STM32F103_MCAL/RCC/subdir.mk
-include STM32F103_MCAL/GPIO/subdir.mk
-include STM32F103_MCAL/EXTI/subdir.mk
-include HAL/PC_Display/subdir.mk
-include HAL/Light/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/Keypad/subdir.mk
-include HAL/IR/subdir.mk
-include Application/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := SmartAccess_ControlSystem
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
SmartAccess_ControlSystem.elf \

MAP_FILES += \
SmartAccess_ControlSystem.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SmartAccess_ControlSystem.list \

OBJCOPY_HEX += \
SmartAccess_ControlSystem.hex \

OBJCOPY_BIN += \
SmartAccess_ControlSystem.bin \


# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: SmartAccess_ControlSystem.elf secondary-outputs

# Tool invocations
SmartAccess_ControlSystem.elf SmartAccess_ControlSystem.map: $(OBJS) $(USER_OBJS) F:\Embedded\LearnInDepth\WS\SmartAccess_ControlSystem\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "SmartAccess_ControlSystem.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"F:\Embedded\LearnInDepth\WS\SmartAccess_ControlSystem\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SmartAccess_ControlSystem.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SmartAccess_ControlSystem.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SmartAccess_ControlSystem.list"
	@echo 'Finished building: $@'
	@echo ' '

SmartAccess_ControlSystem.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "SmartAccess_ControlSystem.hex"
	@echo 'Finished building: $@'
	@echo ' '

SmartAccess_ControlSystem.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "SmartAccess_ControlSystem.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) SmartAccess_ControlSystem.bin SmartAccess_ControlSystem.elf SmartAccess_ControlSystem.hex SmartAccess_ControlSystem.list SmartAccess_ControlSystem.map default.size.stdout
	-@echo ' '

post-build:
	"E:\Apps\STM32CubeIDE_1.10.0\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.cubeprogrammer.win32_2.0.300.202205161323\tools\bin\STM32_Programmer_CLI.exe" -c port=SWD mode=UR -d "SmartAccess_ControlSystem.elf" -v -rst
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified post-build

-include ../makefile.targets

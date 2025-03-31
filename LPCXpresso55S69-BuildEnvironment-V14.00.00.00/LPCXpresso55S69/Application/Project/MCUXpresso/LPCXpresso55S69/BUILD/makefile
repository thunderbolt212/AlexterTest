################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/portable/MemMang/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/portable/GCC/ARM_CM33_NTZ/non_secure/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities/str/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities/debug_console/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/drivers/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/cmsis_drivers/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/LPC55S69/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/uart/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/serial_manager/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/lists/subdir.mk
-include TargetSpecific/Drivers/subdir.mk
-include TargetSpecific/subdir.mk
-include PlatformPackage/RTE/subdir.mk
-include PlatformPackage/RGB565/subdir.mk
-include Application/Source/subdir.mk
-include Application/GeneratedCode/subdir.mk
-include subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := EmbeddedWizard-LPCXpresso55S69
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: EmbeddedWizard-LPCXpresso55S69.axf

# Tool invocations
EmbeddedWizard-LPCXpresso55S69.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/mcuxpresso" -L"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../PlatformPackage/RGB565" -L"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../PlatformPackage/RTE" -Xlinker -Map="EmbeddedWizard-LPCXpresso55S69.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -T LPCXpresso55S69_BUILD.ld -o "EmbeddedWizard-LPCXpresso55S69.axf" $(OBJS) $(USER_OBJS) $(LIBS) -lewgfx-m33-gcc -lewrte-m33-gcc
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) EmbeddedWizard-LPCXpresso55S69.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "EmbeddedWizard-LPCXpresso55S69.axf"; # arm-none-eabi-objcopy -v -O binary "EmbeddedWizard-LPCXpresso55S69.axf" "EmbeddedWizard-LPCXpresso55S69.bin" ; # checksum -p LPC55S69 -d "EmbeddedWizard-LPCXpresso55S69.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets

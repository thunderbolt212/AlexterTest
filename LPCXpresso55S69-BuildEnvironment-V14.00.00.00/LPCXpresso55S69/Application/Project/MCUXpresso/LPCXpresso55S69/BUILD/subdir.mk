################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/ThirdParty/MCUXpressoSDK/devices/LPC55S69/mcuxpresso/startup_lpc55s69_cm33_core0.c 

C_DEPS += \
./startup_lpc55s69_cm33_core0.d 

OBJS += \
./startup_lpc55s69_cm33_core0.o 


# Each subdirectory must supply rules for building sources it contributes
startup_lpc55s69_cm33_core0.o: C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/ThirdParty/MCUXpressoSDK/devices/LPC55S69/mcuxpresso/startup_lpc55s69_cm33_core0.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu11 -D__MCUXPRESSO -D__USE_CMSIS -D__NEWLIB__ -DEW_USE_OPERATING_SYSTEM=1 -DNDEBUG -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DSERIAL_PORT_TYPE_UART=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../Application/GeneratedCode" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../Application/Source" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../TargetSpecific" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../TargetSpecific/Drivers" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Core/Include" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Driver/Include" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/components/lists" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/mcuxpresso" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities/str" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/utilities/debug_console" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/drivers" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/devices/LPC55S69/cmsis_drivers" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/include" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/portable/GCC/ARM_CM33_NTZ/non_secure" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos-kernel/portable/MemMang" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../PlatformPackage/RTE" -I"C:/nxp/AlexterTest/LPCXpresso55S69-BuildEnvironment-V14.00.00.00/LPCXpresso55S69/Application/Project/MCUXpresso/LPCXpresso55S69/../../../../PlatformPackage/RGB565" -O2 -fno-common -g -gdwarf-4 -Wall -mcpu=cortex-m33  -c  -ffunction-sections  -fdata-sections  -fno-builtin -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./startup_lpc55s69_cm33_core0.d ./startup_lpc55s69_cm33_core0.o

.PHONY: clean--2e-


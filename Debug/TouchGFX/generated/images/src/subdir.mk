################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_KJS0708.cpp \
../TouchGFX/generated/images/src/image_led_off.cpp \
../TouchGFX/generated/images/src/image_led_on.cpp \
../TouchGFX/generated/images/src/image_logo_240_136.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_KJS0708.o \
./TouchGFX/generated/images/src/image_led_off.o \
./TouchGFX/generated/images/src/image_led_on.o \
./TouchGFX/generated/images/src/image_logo_240_136.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_KJS0708.d \
./TouchGFX/generated/images/src/image_led_off.d \
./TouchGFX/generated/images/src/image_led_on.d \
./TouchGFX/generated/images/src/image_logo_240_136.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../FATFS/Target -I../FATFS/App -I../USB_HOST/App -I../USB_HOST/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"D:/Project/STM32/STM32F746/F746GDISCO_TouchGFX/Drivers/BSP/Components/Common" -I"D:/Project/STM32/STM32F746/F746GDISCO_TouchGFX/Drivers/BSP/Components/ft5336" -I"D:/Project/STM32/STM32F746/F746GDISCO_TouchGFX/Drivers/BSP/Components/n25q128a" -I"D:/Project/STM32/STM32F746/F746GDISCO_TouchGFX/Drivers/BSP/Components/rk043fn48h" -I"D:/Project/STM32/STM32F746/F746GDISCO_TouchGFX/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_KJS0708.d ./TouchGFX/generated/images/src/image_KJS0708.o ./TouchGFX/generated/images/src/image_KJS0708.su ./TouchGFX/generated/images/src/image_led_off.d ./TouchGFX/generated/images/src/image_led_off.o ./TouchGFX/generated/images/src/image_led_off.su ./TouchGFX/generated/images/src/image_led_on.d ./TouchGFX/generated/images/src/image_led_on.o ./TouchGFX/generated/images/src/image_led_on.su ./TouchGFX/generated/images/src/image_logo_240_136.d ./TouchGFX/generated/images/src/image_logo_240_136.o ./TouchGFX/generated/images/src/image_logo_240_136.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src


################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget.cc \
../src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget_test.cc 

OBJS += \
./src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget.o \
./src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget_test.o 

CC_DEPS += \
./src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget.d \
./src/gtest-1.7.0/xcode/Samples/FrameworkSample/widget_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/gtest-1.7.0/xcode/Samples/FrameworkSample/%.o: ../src/gtest-1.7.0/xcode/Samples/FrameworkSample/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



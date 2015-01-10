################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/gtest-1.7.0/codegear/gtest_all.cc \
../src/gtest-1.7.0/codegear/gtest_link.cc 

OBJS += \
./src/gtest-1.7.0/codegear/gtest_all.o \
./src/gtest-1.7.0/codegear/gtest_link.o 

CC_DEPS += \
./src/gtest-1.7.0/codegear/gtest_all.d \
./src/gtest-1.7.0/codegear/gtest_link.d 


# Each subdirectory must supply rules for building sources it contributes
src/gtest-1.7.0/codegear/%.o: ../src/gtest-1.7.0/codegear/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



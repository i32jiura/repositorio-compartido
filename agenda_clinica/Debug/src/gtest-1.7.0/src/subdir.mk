################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/gtest-1.7.0/src/gtest-all.cc \
../src/gtest-1.7.0/src/gtest-death-test.cc \
../src/gtest-1.7.0/src/gtest-filepath.cc \
../src/gtest-1.7.0/src/gtest-port.cc \
../src/gtest-1.7.0/src/gtest-printers.cc \
../src/gtest-1.7.0/src/gtest-test-part.cc \
../src/gtest-1.7.0/src/gtest-typed-test.cc \
../src/gtest-1.7.0/src/gtest.cc \
../src/gtest-1.7.0/src/gtest_main.cc 

OBJS += \
./src/gtest-1.7.0/src/gtest-all.o \
./src/gtest-1.7.0/src/gtest-death-test.o \
./src/gtest-1.7.0/src/gtest-filepath.o \
./src/gtest-1.7.0/src/gtest-port.o \
./src/gtest-1.7.0/src/gtest-printers.o \
./src/gtest-1.7.0/src/gtest-test-part.o \
./src/gtest-1.7.0/src/gtest-typed-test.o \
./src/gtest-1.7.0/src/gtest.o \
./src/gtest-1.7.0/src/gtest_main.o 

CC_DEPS += \
./src/gtest-1.7.0/src/gtest-all.d \
./src/gtest-1.7.0/src/gtest-death-test.d \
./src/gtest-1.7.0/src/gtest-filepath.d \
./src/gtest-1.7.0/src/gtest-port.d \
./src/gtest-1.7.0/src/gtest-printers.d \
./src/gtest-1.7.0/src/gtest-test-part.d \
./src/gtest-1.7.0/src/gtest-typed-test.d \
./src/gtest-1.7.0/src/gtest.d \
./src/gtest-1.7.0/src/gtest_main.d 


# Each subdirectory must supply rules for building sources it contributes
src/gtest-1.7.0/src/%.o: ../src/gtest-1.7.0/src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



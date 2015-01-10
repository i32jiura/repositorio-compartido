################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/gtest-1.7.0/samples/sample1.cc \
../src/gtest-1.7.0/samples/sample10_unittest.cc \
../src/gtest-1.7.0/samples/sample1_unittest.cc \
../src/gtest-1.7.0/samples/sample2.cc \
../src/gtest-1.7.0/samples/sample2_unittest.cc \
../src/gtest-1.7.0/samples/sample3_unittest.cc \
../src/gtest-1.7.0/samples/sample4.cc \
../src/gtest-1.7.0/samples/sample4_unittest.cc \
../src/gtest-1.7.0/samples/sample5_unittest.cc \
../src/gtest-1.7.0/samples/sample6_unittest.cc \
../src/gtest-1.7.0/samples/sample7_unittest.cc \
../src/gtest-1.7.0/samples/sample8_unittest.cc \
../src/gtest-1.7.0/samples/sample9_unittest.cc 

OBJS += \
./src/gtest-1.7.0/samples/sample1.o \
./src/gtest-1.7.0/samples/sample10_unittest.o \
./src/gtest-1.7.0/samples/sample1_unittest.o \
./src/gtest-1.7.0/samples/sample2.o \
./src/gtest-1.7.0/samples/sample2_unittest.o \
./src/gtest-1.7.0/samples/sample3_unittest.o \
./src/gtest-1.7.0/samples/sample4.o \
./src/gtest-1.7.0/samples/sample4_unittest.o \
./src/gtest-1.7.0/samples/sample5_unittest.o \
./src/gtest-1.7.0/samples/sample6_unittest.o \
./src/gtest-1.7.0/samples/sample7_unittest.o \
./src/gtest-1.7.0/samples/sample8_unittest.o \
./src/gtest-1.7.0/samples/sample9_unittest.o 

CC_DEPS += \
./src/gtest-1.7.0/samples/sample1.d \
./src/gtest-1.7.0/samples/sample10_unittest.d \
./src/gtest-1.7.0/samples/sample1_unittest.d \
./src/gtest-1.7.0/samples/sample2.d \
./src/gtest-1.7.0/samples/sample2_unittest.d \
./src/gtest-1.7.0/samples/sample3_unittest.d \
./src/gtest-1.7.0/samples/sample4.d \
./src/gtest-1.7.0/samples/sample4_unittest.d \
./src/gtest-1.7.0/samples/sample5_unittest.d \
./src/gtest-1.7.0/samples/sample6_unittest.d \
./src/gtest-1.7.0/samples/sample7_unittest.d \
./src/gtest-1.7.0/samples/sample8_unittest.d \
./src/gtest-1.7.0/samples/sample9_unittest.d 


# Each subdirectory must supply rules for building sources it contributes
src/gtest-1.7.0/samples/%.o: ../src/gtest-1.7.0/samples/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



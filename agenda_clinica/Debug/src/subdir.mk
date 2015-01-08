################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Agenda.cpp \
../src/Agenda_test.cpp \
../src/Menu.cpp \
../src/Pacientes.cpp \
../src/Pacientes_test.cpp 

OBJS += \
./src/Agenda.o \
./src/Agenda_test.o \
./src/Menu.o \
./src/Pacientes.o \
./src/Pacientes_test.o 

CPP_DEPS += \
./src/Agenda.d \
./src/Agenda_test.d \
./src/Menu.d \
./src/Pacientes.d \
./src/Pacientes_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



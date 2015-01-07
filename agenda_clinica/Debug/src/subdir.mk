################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Agenda.cpp \
../src/Agenda_test.cpp \
../src/pacientes.cpp \
../src/pacientes_test.cpp \
../src/scrum-32.cpp 

OBJS += \
./src/Agenda.o \
./src/Agenda_test.o \
./src/pacientes.o \
./src/pacientes_test.o \
./src/scrum-32.o 

CPP_DEPS += \
./src/Agenda.d \
./src/Agenda_test.d \
./src/pacientes.d \
./src/pacientes_test.d \
./src/scrum-32.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



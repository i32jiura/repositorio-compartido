################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Agenda.cpp \
../src/Agenda_unittest.cpp \
../src/Menu.cpp \
../src/Pacientes.cpp \
../src/pacientes_unittest.cpp 

OBJS += \
./src/Agenda.o \
./src/Agenda_unittest.o \
./src/Menu.o \
./src/Pacientes.o \
./src/pacientes_unittest.o 

CPP_DEPS += \
./src/Agenda.d \
./src/Agenda_unittest.d \
./src/Menu.d \
./src/Pacientes.d \
./src/pacientes_unittest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



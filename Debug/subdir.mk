################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../emailtask.cpp \
../emailtaskfactory.cpp \
../factorypattern.cpp \
../smstask.cpp 

OBJS += \
./emailtask.o \
./emailtaskfactory.o \
./factorypattern.o \
./smstask.o 

CPP_DEPS += \
./emailtask.d \
./emailtaskfactory.d \
./factorypattern.d \
./smstask.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/MAL/Init_Interrupts.c" \

C_SRCS += \
../Sources/MAL/Init_Interrupts.c \

OBJS += \
./Sources/MAL/Init_Interrupts_c.obj \

OBJS_QUOTED += \
"./Sources/MAL/Init_Interrupts_c.obj" \

C_DEPS += \
./Sources/MAL/Init_Interrupts_c.d \

OBJS_OS_FORMAT += \
./Sources/MAL/Init_Interrupts_c.obj \

C_DEPS_QUOTED += \
"./Sources/MAL/Init_Interrupts_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/MAL/Init_Interrupts_c.obj: ../Sources/MAL/Init_Interrupts.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/MAL/Init_Interrupts.args" -o "Sources/MAL/Init_Interrupts_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/MAL/%.d: ../Sources/MAL/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '



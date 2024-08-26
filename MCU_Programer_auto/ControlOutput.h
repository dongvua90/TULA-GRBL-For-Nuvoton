#ifndef _CONTROL_OUTPUT_H
#define _CONTROL_OUTPUT_H

#include "General.h"

#define VACUUM1_ON				PE4=1	
#define VACUUM1_OFF				PE4=0
#define VACUUM2_ON				PB9=1	
#define VACUUM2_OFF				PB9=0
#define XILANH1_ON				PB11=1
#define XILANH1_OFF				PB11=0
#define XILANH2_ON				PE5=1
#define XILANH2_OFF				PE5=0
#define RINGLED_ON 				PB10=1
#define RINGLED_OFF 			PB10=0
#define PUMP_ON						PE3=1
#define PUMP_OFF					PE3=0

#define STEPPER_ENABLE		PE2=1		// Dung chan Buzz tren mach 
#define STEPPER_DISABLE		PE2=0;



// Dinh nghia cac chan dieu khien Stepper 
#define dirX 	PC3
#define dirY 	PC5 
#define dirZ  PD14 
#define dirR1  PD6
#define dirR2  PB2

#define pX 	PC2
#define pY 	PC4
#define pZ 	PD15
#define pR1 	PD7
#define pR2 	PB3


// Cau hinh cac chan Output, bao gom Stepper control va relay
void ControlOutput_Init();











#endif
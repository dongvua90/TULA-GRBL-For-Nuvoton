#include "ControlOutput.h"




// Cau hinh cac chan Output, bao gom Stepper control va relay
void ControlOutput_Init()
{
	  GPIO_SetMode(PA, (BIT1 | BIT2 | BIT3 ), GPIO_MODE_OUTPUT);
    GPIO_SetMode(PC, (BIT2 | BIT3 | BIT4 | BIT5), GPIO_MODE_OUTPUT);
    GPIO_SetMode(PB, (BIT2 | BIT3 |BIT9 | BIT10| BIT11), GPIO_MODE_OUTPUT);
	  GPIO_SetMode(PD, (BIT6 | BIT7 | BIT14 | BIT15), GPIO_MODE_OUTPUT);
    GPIO_SetMode(PE, (BIT1 | BIT2 | BIT3 | BIT4 | BIT5 | BIT13 | BIT14), GPIO_MODE_OUTPUT);
}



//
// NUC140 SYS_Init
//
#include <stdio.h>
#include "NUC100Series.h"
#include "MCU_init.h"
#include "SYS_init.h"

#define MCU_CLK 48000000

void SYS_Init(void)
{
    SYS_UnlockReg(); // Unlock protected registers
        
    CLK_EnableXtalRC(CLK_PWRCON_XTL12M_EN_Msk);					 		/* Enable external XTAL 12MHz clock */
		CLK_WaitClockReady(CLK_CLKSTATUS_XTL12M_STB_Msk);			 /* Waiting for clock ready */
    CLK_SetCoreClock(MCU_CLK);
		
		// Thiet lap CLK Timer0
		CLK_EnableModuleClock(TMR0_MODULE);	
		CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0_S_HCLK, 0);
		// Thiet lap CLK Timer1
		CLK_EnableModuleClock(TMR1_MODULE);
		CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1_S_HCLK, 0);
    // Thiet lap CLK UART0
		CLK_EnableModuleClock(UART0_MODULE);
		CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL1_UART_S_HXT, CLK_UART_CLK_DIVIDER(UART_CLOCK_DIVIDER));
		
		SYS->GPB_MFP = (SYS->GPB_MFP & ~SYS_PB_L_MFP_PB1_MFP_Msk)  | SYS_PB_L_MFP_PB1_MFP_UART0_TX;		//PIN_UART0_TX_PB1
		SYS->GPB_MFP = (SYS->GPB_MFP & ~SYS_PB_L_MFP_PB0_MFP_Msk)  | SYS_PB_L_MFP_PB0_MFP_UART0_RX;		//PIN_UART0_RX_PB0

		
//    SYS_LockReg();  // Lock protected registers
}

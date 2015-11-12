/*
 * MainConfig.c
 *
 *  Created on: Oct 29, 2015
 *      Author: Jorge
 */

/*
 * MainConfig.c
 *
 *  Created on: Nov 12, 2015
 *      Author: Jorge
 */
#include "HAL/MPC5606B.h"
#include "HAL/MainConfig.h"
#include "HAL/IntcInterrupts.h"

/****Functions****/

void init_system(void)
{
	init_modes_and_clocks();
	initPeriClkGen();
	config_Emb_IO();
	init_pit_interrupts();
}

void init_modes_and_clocks(void) 
{
	ME.MER.R = 0x0000001D;          	/* Enable DRUN, RUN0, SAFE, RESET modes */
	
	/* Initialize PLL before turning it on: */
	CGM.FMPLL_CR.R = 0x02400100;    	/* 8 MHz xtal: Set PLL0 to 64 MHz */   
	ME.RUN[0].R = 0x001F0074;       	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL0 */
	ME.RUNPC[1].R = 0x00000010; 	  	/* Peri. Cfg. 1 settings: only run in RUN0 mode */
  	ME.PCTL[68].R = 0x01; 	    		/*MPC56xxB/S SIU: select ME.RUNPC[1] */  
  	ME.PCTL[92].R = 0x01; 	      		/* MPC56xxB/S PIT: select ME.RUNPC[1] */	
  	
  	/* Mode Transition to enter RUN0 mode: */
  	ME.MCTL.R = 0x40005AF0;         /* Enter RUN0 Mode & Key */
  	ME.MCTL.R = 0x4000A50F;         /* Enter RUN0 Mode & Inverted Key */  
  	while (ME.GS.B.S_MTRANS) {}     /* Wait for mode transition to complete */    
                                  	
  	/* Note: could wait here using timer and/or I_TC IRQ */
  	while(ME.GS.B.S_CURRENTMODE != 4) {} /* Verify RUN0 is the current mode */
}


void disableWatchdog(void) 
{
	SWT.SR.R = 0x0000c520;     /* Write keys to clear soft lock bit */
  	SWT.SR.R = 0x0000d928; 
  	SWT.CR.R = 0x8000010A;     /* Clear watchdog enable (WEN) */
}        



void initPeriClkGen(void) 
{
	/* Use the following code as required for MPC56xxB or MPC56xxS:*/
  	CGM.SC_DC2.R = 0x80;   /* MPC56xxB/S: Enable peri set 3 sysclk divided by 1  omg */
}


void config_Emb_IO(void)
{
  	/* leds are seted as outputs */
  	SIU.PCR[LED_1].R = 0x200;
  	SIU.PCR[LED_2].R = 0x200;
  		
  	/* Embedded board buttons are seted as inputs */
  	SIU.PCR[PUSHB_1].R = 0x100;	
  	SIU.PCR[PUSHB_2].R = 0x100;

  	/* leds init leds in off */
	SIU.GPDO[LED_1].R = OFF;
	SIU.GPDO[LED_2].R = OFF;

} 

T_BUTTON read_button(T_UBYTE lub_Ch)
{
	return SIU.GPDI[lub_Ch].B.PDI;
}

void led_on(T_UBYTE lub_Ch)
{
	SIU.GPDO[lub_Ch].R = ON;
}

void led_off(T_UBYTE lub_Ch)
{
	SIU.GPDO[lub_Ch].R = OFF;
}

void led_toggle(T_UBYTE lub_Ch)
{
	SIU.GPDO[lub_Ch].R ^= 1;
}

void pit_config_fnc(void)
{
    PIT.PITMCR.B.MDIS   = 1;    
        /*Disable PIT for initialization         */

    PIT.CH[0].LDVAL.R  = 64000;    
        /*value loaded in the Timer0: 64k    */

    PIT.CH[0].TCTRL.B.TIE  = 1;    
        /*Timer 0 Interrupt : Enable    */

    PIT.CH[0].TCTRL.B.TEN = 1;    
        /*Start Timer 0 is : Enable    */ 
    
    PIT.PITMCR.B.FRZ = 1;
    	/*Freeze enable*/

    PIT.PITMCR.B.MDIS = 0;    
        /*PIT Module : Enable        */

}



void init_pit_interrupts(void)
{
	pit_config_fnc();
	INTC_InstallINTCInterruptHandler(pit_isr,59,1); 
		/* vector59 for PIT Timer 0 */
	INTC.CPR.R = 0;
		/*assign the priority*/
}


void pit_isr(void)
{    		
		/* There's single interrupt for the ch0 of the pit: */
	
		if(PIT.CH[0].TFLG.B.TIF == 1)  
		{			
			led_toggle(LED_1);			/* toggle LED */
			PIT.CH[0].TFLG.B.TIF = 1;	/* Clear interrupt flag */ 
		}
		else
		{
			/* ... */
		}
}

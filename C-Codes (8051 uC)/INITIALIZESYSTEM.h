	
	
		#ifndef _INITIALIZESYSTEM_H_
		#define _INITIALIZESYSTEM_H_
		
		
		#ifndef _Reg52_H_
		#define _Reg52_H_
		#include<reg52.h>
		#endif
		
		
		#ifndef _LED_PORTS_
		#define _LED_PORTS_
		#define LED_UPPER P0
		#define LED_LOWER P2
		#endif
		
		
		sbit SMODE_BIT=ACC^7;						//to double the baud rate and reduce error percentage.
			
			void initialize_system(void)
		{
				LED_LOWER=0x00;				//OUTPUT	,make it as an output.
				LED_UPPER=0x00;				//OUTPUT	
			
			INT0=1;													//make intrrupt0 pin as input.

			TMOD=0x21;											//timer0 mode 1 ,16 bit timers.and timer 1 for serial communication.			
			
			EA 	  = 1;    						 			// Enable Global Interrupt Flag
			EX0   = 1;                      /* External interrupt 0 enable              */
			IT0   = 1;                      /* External interrupt 0 Edge sesitive       */
			ET0   = 1;                      /* Enable Timer 0 interrupts                */
			IE0=1;													//avoid next intrupt untill current intrrupt is running.

					//for serial communication.
			
		SCON=0x50;              // Configure serial control register
		              // SMOD bit setting
		ACC=PCON;
		SMODE_BIT=1;
		PCON=ACC;
		
		TH1=0xF7;  //0xF7=247             // 9600 baudrate(16 mhz clock)
		TR1=1;                  					// Start timer 1
								//SERIAL INTRUUPT SETTING
		ES=1;																//serial port intrrupt enabled.
		//PS=1;																//serial port intrrupt, high priority.
		}
		
		#endif
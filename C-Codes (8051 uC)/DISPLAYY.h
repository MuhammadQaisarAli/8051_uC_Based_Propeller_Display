
		#ifndef _DISPLAYY_H_
		#define _DISPLAYY_H_
		
		#include "CHARACTER.h"
		
		#ifndef _Reg52_H_
		#define _Reg52_H_
		#include<reg52.h>
		#endif
		
		#ifndef _INITIALIZESYSTEM_H_
		#define _INITIALIZESYSTEM_H_
		#include "INITIALIZESYSTEM.h"
		#endif
		
		#ifndef	_SERIALRECIVE_H_
		#define	_SERIALRECIVE_H_
		#include "SERIALRECIVE.h"
		#endif
		
		#ifndef _LED_PORTS_
		#define _LED_PORTS_
		#define LED_UPPER P0
		#define LED_LOWER P2
		#endif
		
		#define DISPLAY_EXPANDING_FACTOR 12						//this factor will expand or shrink the display at a constont speed.

		static unsigned int time_per_pixel_low=0, time_per_pixel_high=0;
		static bit flag=0;
		
		static unsigned  int count=0;
		

		void Int0(void) interrupt 0 using 2
		{
			
			if(flag==0)												//for first interrupt start counting.
			{
				TL0=0x00;
				TH0=0x00;
				
				TR0=1;   											 // Start timer 0			
				
				flag=1;
				
				return;
			}
			
			else if(flag==1)
			{
				TR0=0;												//stop timer.
				flag=0;
				
				return;
			}
						
		}

		
		void timer0(void) interrupt 1  using 3
		{
			count++;							
		}

		
		void calculate_time_per_pixel(void)
		{
			unsigned int current_time_of_timer=0x0000;
			unsigned long int time_per_pixel=0;
			
			EX0=1;													//Enable Inturrupt0 measure 1 revoution time.
			
			while(flag==0);											//problem.							
			while(flag==1);								

			EX0=0;													//as 1 revolution is completer now disable the intruppt.
			
			time_per_pixel=count*65535;			//as 16 bit timer has  counts 65536.
			
			current_time_of_timer=TH0;
			current_time_of_timer=current_time_of_timer<<8;
			current_time_of_timer=current_time_of_timer|TL0;
			
			time_per_pixel+=current_time_of_timer;
			time_per_pixel=(time_per_pixel*DISPLAY_EXPANDING_FACTOR)/(117);				//total 117 pixels.  60 is an offset
			
			time_per_pixel=(0xFFFF-time_per_pixel);
			count=0;
			time_per_pixel_low=time_per_pixel;
			time_per_pixel=time_per_pixel>>8;
			time_per_pixel_high=time_per_pixel;

		}
		
		void delay_pixel(void)
		{
			TH2=time_per_pixel_high;
			TL2=time_per_pixel_low;

			TR2=1;
			while(!TF2);
			TR2=0;
			TF2=0;
		}
		
		
		void display(unsigned char STRING[18])
		{
			unsigned char i=0,j;
			
			while(STRING[i]!='\0')
			{
				if(STRING[i]==' ')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SPACE[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='A')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_A[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='B')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_B[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='C')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_C[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='D')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_D[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='E')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_E[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='F')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_F[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='G')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_G[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='H')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_H[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='I')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_I[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='J')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_J[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='K')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_K[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='L')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_L[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='M')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_M[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='N')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_N[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='O')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_O[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='P')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_P[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='Q')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_Q[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='R')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_R[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='S')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_S[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='T')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_T[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='U')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_U[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='V')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_V[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='W')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_W[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='X')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_X[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='Y')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_Y[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='Z')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= BIG_Z[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='a')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_A[j];
						delay_pixel();
					}	
					
				}
				
				else if(STRING[i]=='b')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_B[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='c')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_C[j];
						delay_pixel();
					}		
				}
		/*		
				else if(STRING[i]=='d')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_D[j];
						delay_pixel();
					}			
				}
				
				else if(STRING[i]=='e')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_E[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='f')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_F[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='g')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_G[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='h')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_H[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='i')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_I[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='j')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_J[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='k')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_K[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='l')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_L[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='m')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_M[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='n')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_N[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='o')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_O[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='p')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_P[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='q')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_Q[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='r')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_R[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='s')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_S[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='t')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_T[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='u')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_U[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='v')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_V[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='w')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_W[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='x')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_X[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='y')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_Y[j];
						delay_pixel();
					}		
				}
				
				else if(STRING[i]=='z')
				{
					for(j=0;j<6;j++)
					{
						LED_UPPER= SML_Z[j];
						delay_pixel();
					}		
				}
				*/
				
				
				
				i++;				
			}		
			
			
			while(i<18)
			{
				for(j=0;j<6;j++)
				{
					LED_UPPER= SPACE[j];
					delay_pixel();
				}		
					i++;
	 		}
				
			
		
		}

		

		#endif



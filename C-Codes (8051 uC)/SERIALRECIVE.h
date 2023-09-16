/*THIS MAY NOT WORK PERFECTLY,MAKE IT CORRECT*/

	#ifndef	_SERIALRECIVE_H_
	#define	_SERIALRECIVE_H_
	
	#ifndef _Reg52_H_
	#define _Reg52_H_
	#include<reg52.h>
	#endif
	
	unsigned char recived_data[18]="PROPPELER DISPLAY";
	static unsigned char i=0;
	
	void Serial_Recive(void) interrupt 4
	{
		
		while(RI)
		{
			if(i<18)
			{
				recived_data[i]=SBUF;
				i++;
				RI=0;
			}
			else
				recived_data[i]='\0';			//place a NULL character at the end.
		}
		i=0;
		
	}
	



   #endif
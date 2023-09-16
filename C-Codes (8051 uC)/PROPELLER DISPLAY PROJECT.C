/*
We generated the look up table for the ASCII in CHARACTER.h Header File.
The Display works using interrupts and timers.
								ALGORITHEM
				
				STEP 1: Measure Time per Revolution.
				STEP 2: Calculates Time Per Pixel. (Pixel Means a Single Column of LEDs).
				STEP 3: Calculates Delay per Pixel. (Time for which a pixel will be on)
				STEP 4: Outputs the Respective Code For a respective Graphics (Character).
				STEP 5: Calls Delay per Pixel.
				STEP 6: Repeats STEP 4 & STEP 5 ,Untill all the codes are outputed for a respective Character.
				STEP 7: Repeats STEP 4 to STEP 6 ,Untill all the characters are Displayed.				
				Step 8: Repeat STEP 1 to STEP 8: 
*/

#include<reg52.h>
#include "INITIALIZESYSTEM.h"
#include "SERIALRECIVE.h"
#include "DISPLAYY.h"
#define wait 50
	
void main()
{
	int i=0;
	initialize_system();				

	while(1)
	{for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("PROPELLER DISPLAY");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("MADE BY");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("DURRENAJAF");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("ASHFAQ AHMAD");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("M QAISAR ALI");		//MAXIMUM 18 CHARACTERS
		}
		i=0;


		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("SUBMITTED TO");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("SIR GUL MUHAMMAD");		//MAXIMUM 18 CHARACTERS
		}
		i=0;
		
		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("AND");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("SIR NASAR JAMAL");		//MAXIMUM 18 CHARACTERS
		}
		i=0;

		for(i=0;i<wait;i++)
		{
			calculate_time_per_pixel();
			display("THANK YOU");		//MAXIMUM 18 CHARACTERS
		}
		i=0;
		

	}
	
}
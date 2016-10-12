//adapted from http://wiringpi.com/examples/blink/
//and from https://projects.drogon.net/raspberry-pi/examples/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <wiringPi.h>
int main (void)
{
	if (wiringPiSetup () == -1)
		exit (1) ;
	printf ("Raspberry Pi wiringPi traffic light test program\n") ;
	pinMode (0, OUTPUT) ;
	pinMode (1, PWM_OUTPUT) ;
	for (;;)
	{
	    printf ("Red\n") ;
		digitalWrite (0, HIGH);
		pwmWrite (1, 0) ;
		delay (500);
	    printf ("Off for B+, possibly Yellow for other boards\n") ;
		digitalWrite (0, HIGH) ;
		pwmWrite (1, 1023) ;
		delay (500);
	    printf ("Green\n") ;
		digitalWrite (0, LOW) ;
		pwmWrite (1, 1023) ;
		delay (500);
	    printf ("Off\n") ;
		digitalWrite (0, LOW) ;
		pwmWrite (1, 0) ;
		delay (500);
	    printf ("Yellow?\n") ;
		//challenge for B+
		printf ("Fades?\n") ;
		//exercise
	}
	return 0 ;
}
//compile and run via:
//gcc -Wall -o traffic2B traffic2B.c -lwiringPi
//sudo ./traffic2B

#include "stdio.h"
#include "time.h"
#include "stdint.h"
#include "math.h"



void kmain()
	{
		int a=0;
		delay(1);		
		clrscr();
		//putchar('X');
		//delay(10);		
		////clrscr();
		//a = atoi("12");
		//puts(itoa(a,10));
		//clrscr();
		//delay(10);
		double sss=122.0;
		//puts(itoa(1234567811,10));

		//newline();
		char buf[100];
		puts(ftoa(sqrt(sss), buf, 10));
		//newline();
	}

#include "time.h"

void delay(int n)
{
	for(int i=0; i<100000000*n; i++)
	{
		
	}
}

unsigned long long int rdtsc(void)
{
   unsigned long long int x;
   unsigned a, d;

   __asm__ volatile("rdtsc" : "=a" (a), "=d" (d));

   return ((unsigned long long)a) | (((unsigned long long)d) << 32);;
}


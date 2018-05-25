#include "stdio.h"

char* vidptr = (char*) 0xb8000;
unsigned int i = 0;
unsigned int j = 0;

void putchar(char c)
{
	/* the character's ascii */
	vidptr[i] = c;
	/* attribute-byte: give character black bg and light grey fg */
	vidptr[i + 1] = 0x07;
	i = i + 2;
}

void puts(char *s){
	while(*s!='\0')
	{
		putchar(*s);
		*s++;
		
	}
}

void clrscr()
{
		while(j < 80 * 25 * 2) {
		/* blank character */
		vidptr[j] = ' ';
		/* attribute-byte - light grey on black screen */
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	}

	j = 0;

}

void newline(){
	

}





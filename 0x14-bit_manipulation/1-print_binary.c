#include <stdio.h>
#include "main.h"

/**
 * print_binary - Executing binary equiv of decimal number 
 * @n: number handled and to be printed 
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count){
			putchar('0');
		}
	}
	if (!count){
		putchar('0');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Changing bits regardless of their numbers
 * @n: first number
 * @m: second number
 * Return: numbers changed of bits after result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 64; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}


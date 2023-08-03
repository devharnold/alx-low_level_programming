#include<stdio.h>
#include "main.h"

/**
 * set_bit - Entry Point (MAIN)
 * @n: pointer to the number to change
 * @index: index of bit
 * Return: Upon Success (1), Otherwise (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64){
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}


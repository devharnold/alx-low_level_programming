#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to number allocates address
 * @index: index belonging to bit in clearance
 * Return: Upon Success (1), Otherwise (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 64)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

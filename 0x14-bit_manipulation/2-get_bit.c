#include "main.h"

/**
 * get_bit -Entry Point
 * @n: number to search
 * @index: index
 * Return: The result bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	if (index > 64){
		return (-1);
	}
	bit_val = (n >> index) & 1;
	return (bit_val);
}


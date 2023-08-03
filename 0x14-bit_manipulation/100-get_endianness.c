#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Main to check the size of a machine: Big, Small, Endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}


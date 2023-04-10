#include "main.h"
#include <stdio.h>

/**
 * main - Printing number of args
 * @argc: Number of argument count
 * @argv: the vectors
 *
 * Return: (0) Always
 */

int main (int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Printing arg docs
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always (0)
 */

int main (int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}


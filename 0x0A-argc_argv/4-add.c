#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** 
 * main - Printing the sum of positive numbers 
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: (0) Always
 */

int main (int argc, char *argv[])
{
	int a;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[1];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}


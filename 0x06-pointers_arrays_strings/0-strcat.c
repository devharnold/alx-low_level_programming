#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concentrates two strings
 * @dest: The destination to a string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int arno = 0, i;

	while (dest[arno])
	{
		arno++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[arno] = src[i];
		arno++;
	}

	dest[arno] = '\n';
	return (dest);
}

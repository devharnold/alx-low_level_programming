#include "main.h"
#include <string.h>


/**
 * _strncat - Concentrates two strings using at most
 * an inputted number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_arn = 0;

	while(dest[index++])
		dest_arn++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_arn++] = src[index];
	return (dest);
}


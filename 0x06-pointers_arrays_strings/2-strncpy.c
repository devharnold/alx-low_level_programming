#include "main.h"

/**
 * _strncpy - Copies at most an inputed number of bytes from string src into dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from the src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_arn = 0;
	while (src[index++])
		src_arn++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_arn; index < n; index++)
		dest[index] = '\0';

	return (dest);
}



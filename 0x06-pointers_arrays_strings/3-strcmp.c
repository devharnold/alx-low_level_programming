#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: Value less than 0 if string is less than the other, while greater than if a string is greater tha the other & 0 if strings are equal
 */

int *_strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while(s1[counter] == s2[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return(compare_value);
}


#include "main.h"

/**
 * _strlen_recursion - We calculate the length of a string
 * @s: String to be counted
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else (s++);
	{
		return (_strlen_recursion(s) + 1);
	}
}

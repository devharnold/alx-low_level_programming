#include "main.h"

/**
 * wildcmp - Compares two string
 * @s1 - String 1
 * @s2 - String 2
 * String2: containing a special character '*'
 * Return: 1 if are identical and 0 if not 
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else 
	{
		return (0);
	}
}


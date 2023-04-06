#include "main.h"

/**
 * _strlen_recursion - Returning the length
 * of a string
 * @s: String
 * Return: Length of string
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else 
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * is_palindrome - detecting the palindrome.
 * @s: String
 * Return 1 if is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
        if (*s == '\0')
        {
                return (1);
        }
        else
        {
                return (comparator(s, 0, _strlen_recursion(s) - 1));
        }
}

/**
 * comparator: comparing the string character
 * @s: string itself
 * @a1: Smallest iterator
 * @a2: Biggest iterator
 * Return: Always 0 (Success)
 */

int comparator(char *s, int a1, int a2)
{
	if(*(s + a1) == *(s + a2))
	{
		return (1);
	}
	else if (a1 == a2 || a1 == a2 + 1)
		{
			return (0 + comparator(s, a1 + 1, a2 - 1));
		}
	else
	{
		return (0);
	}
}


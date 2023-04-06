#include "main.h"
#include <stdio.h>

int check_prime(int j, int i);
/**
 * is_prime_number - Returning if a number is prime
 * @j: The checked number 
 * Return: Int value
 */

int is_prime_number(int j)
{
	return (check_prime(j, 1));
}
/**
 * check_prime - check if number is prime
 *@g: The number to be checked
 *@h: Iteration times
 *Return: 1 for prime or 0 for composite
 */

int check_prime(int g, int h)
{
	if (g <= 1)
	{
		return (0);
	}
	else if (g % h == 0 && h > 1)
	{
		return (0);
	}
	else if ((g / h) < h)
	{
		return (1);
	}
	else
	{
		return (check_prime(g, h + 1));
	}
}


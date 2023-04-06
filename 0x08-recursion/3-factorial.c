#include "main.h"

/**
 * factorial - Calculating the factorial of a number 
 * @n: The number 
 * If n < 0: Return -1
 * Return: Int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

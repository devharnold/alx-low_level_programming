#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt - Finding the natural square root
 * @n: The number to be calculated
 * @i: Iteration number 
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
        return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (_sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}


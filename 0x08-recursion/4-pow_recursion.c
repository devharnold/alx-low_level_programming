#include "main.h"

/**
 * _pow_recursion - Returning the value of x raised
 * to y.
 * @x: The multiplication value
 * @y: The number of times to multiply the value
 *
 * Return: The value multiplied
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

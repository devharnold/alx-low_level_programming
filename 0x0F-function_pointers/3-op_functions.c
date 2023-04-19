#include "3-calc.h"

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);

/**
* op_add - Returns the sum of two numbers.
* @i: The first number.
* @j: The second number.
* Return: The sum
*/
int op_add(int i, int j)
{
	return (i + j);
}

/**
* op_sub - difference of two numbers.
* @i: The first number.
* @j: The second number.
* Return: The difference
*/
int op_sub(int i, int j)
{
	return (i - j);
}

/**
 * op_div - division of two numbers
 * @i: The first integer
 * @j: The second integer
 * Return: The product
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mul - product of two numbers.
 * @i: The first integer
 * @j: The second integer
 * Return: The product
 */
int op_mul(int i, int j)
{
	return (i * j);
}

/**
* op_mod - remainder of the division of two numbers.
* @i: The first integer
* @j: The second integer
* Return: The remainder of the division of i by j
*/
int op_mod(int i, int j)
{
	return (i % j);
}


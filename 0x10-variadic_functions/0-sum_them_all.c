#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: The parameters
 * @...: var num of par to calculate the sum
 * Return: Upon Success (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;
	va_start(ap, n);
	for (a = 0; a < n; a++){
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}


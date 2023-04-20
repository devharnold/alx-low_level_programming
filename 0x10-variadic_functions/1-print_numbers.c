#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Printing numbers
 * @separator: Specific printed screen 
 * @n: The integers to be used 
 * Today's work is hard mehn...
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;

	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) &&
		separator != NULL){
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}


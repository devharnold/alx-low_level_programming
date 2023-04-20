#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Printing string
* @separator: The string to be printed between strings.
* @n: Strings passed to the function
* @...: ThE var num of str
* Return: Upon Success (0).
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else{
			printf("%s", str);
		}
		if (index != (n - 1) &&
			       	separator != NULL){
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}


#include "main.h"
/**
 * function that _puts_recursion
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;


	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}


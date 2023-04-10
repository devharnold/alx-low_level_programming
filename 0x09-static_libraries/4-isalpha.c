#include "main.h"
		
/**
 * _isalpha - writing code that checks for alphabetic character
 * @c: checked characters
 * Return: 1 if c is a letter, 0 if not 
 */


int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


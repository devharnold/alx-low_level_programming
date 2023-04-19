#include <stdio.h>
#include "function_pointers.h"


/**
* print_name - Printing name
* @name: string to add
* @f: The specific pointer
* Return: Upon Success,(0).
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL ||
		       	f == NULL){
		return;
	}


	f(name);
}


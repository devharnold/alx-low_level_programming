#include <stdio.h>
#include "function_pointers.h"


/**
* array_iterator - Printing array elements
* @array: array
* @size: how many elem to print
* @action: The pointer to point in
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL ||
		     action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}


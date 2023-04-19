#include "function_pointers.h"


/**
* int_index - return index place if comparison = true
* @array: array
* @size: size of elements in array
* @cmp: The specific pointer to functions
* Return: Upon Success (0)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL ||
		       	size <= 0 ||
		       	cmp == NULL){
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}


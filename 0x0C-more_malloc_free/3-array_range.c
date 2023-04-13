#include "main.h"
#include <stdlib.h>
		
/**
 * array_range - creates a range of arrays
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: Upon success (0)
 */
		
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;
	if (min > max){


		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL){
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}


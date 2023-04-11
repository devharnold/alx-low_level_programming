#include "main.h"
#include <stdio.h>
#include <stdlib.h>		

		
/**		
 * _strdup - duplicating to new memory space
 * @str: char
 * Return: Upon Success (0)	
 */
		
char *_strdup(char *str)		
{
	char *ccc;
	int i, j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	ccc = malloc(sizeof(char) * (i + 1));
	if (ccc == NULL)
	{
		return (NULL);
	}	
	for (j = 0; str[j]; j++)
		
		ccc[j] = str[j];	
	return (ccc);
}

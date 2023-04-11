#include "main.h"		
#include <stdlib.h>
		
/**
 * alloc_grid - making grids
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
		
int **alloc_grid(int width, int height)		
{
	int **siz;
	int h, w;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	siz = malloc(sizeof(int *) * height);
	if (siz == NULL){
		return (NULL);
	}
	for (h = 0; h < height; h++){
		siz[h] = malloc(sizeof(int) * width);
		if (siz[h] == NULL){
			for (; h >= 0; h--){
				free(siz[h]);
			}
			free(siz);
			return (NULL);
		}	
	}
	for (h = 0; h < height; h++){
		for (w = 0; w < width; w++){
			siz[h][w] = 0;
		}
	}
	return (siz);
}


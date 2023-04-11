#include "main.h"
#include <stdio.h>
#include <stdlib.h>
		
/**
 * free_grid - frees 2d array, and mem of the grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return:Success (0)
 */
		
void free_grid(int **grid, int height)	
{	
	int a;
	for (a = 0; a < height; a++){
		free(grid[a]);
	}
	free(grid);		
}


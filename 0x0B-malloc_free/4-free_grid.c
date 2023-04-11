#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
		
 * free_grid - frees 2d array
		
 * @grid: 2d grid
		
 * @height: h dimension of the  grid
		
 * Description: frees memory of a  grid
		
 * Return: null
		
 *
		
 */
		
void free_grid(int **grid, int height)
		
{
		
	int i;
		

		
	for (i = 0; i < height; i++)
		
	{
		
		free(grid[i]);
		
	}
		
	free(grid);
		
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: two dimension  array
 * @height: height dimension of array
 * Description: frees memory of array
 * Return: nothing
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

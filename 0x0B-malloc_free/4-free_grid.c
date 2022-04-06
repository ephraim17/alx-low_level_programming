#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: nothing.
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

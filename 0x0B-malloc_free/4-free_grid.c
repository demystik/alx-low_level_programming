#include "main.h"

/**
 * free_grid - This function frees a 2 dimensional grid
 * @height: The height of the array
 * @grid: The pointer to the two dimensional array *
 * Return: returned the freed array
 */

void free_grid(int **grid, int height)
{

	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
			free(grid);
	}
}

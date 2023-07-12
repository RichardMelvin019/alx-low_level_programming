#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimentional grid
 * @grid: memory to be be freed
 * @height: the height
 * Return: void
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

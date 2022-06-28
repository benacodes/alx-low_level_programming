#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free's the grid
 * @grid: the grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

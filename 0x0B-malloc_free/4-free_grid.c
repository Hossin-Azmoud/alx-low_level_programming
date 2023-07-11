#include "main.h"


/**
* free_grid - a function that frees an int 2D grid
* @grid: a pointer to the grid that will be freed.
* @height: the height of the grid that will be freed.
* Return: Void.
*/
void free_grid(int **grid, int height)
{
	int it;

	if (grid == NULL || height <= 0)
		return;

	for (it = 0; it < height; it++)
	{
		free(grid[it]);
	}

	free(grid);
}

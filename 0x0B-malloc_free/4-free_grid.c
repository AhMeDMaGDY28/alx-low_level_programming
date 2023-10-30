#include "main.h"
/**
 * free_grid - Free the memory allocated for a 2D grid of integers.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Description:
 * This function frees the memory allocated for a 2D
 *  grid of integers and its rows.
 *
 * Return: No return value.
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

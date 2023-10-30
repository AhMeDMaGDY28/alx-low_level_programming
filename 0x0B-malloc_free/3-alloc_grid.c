#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocate memory for a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Description:
 * This function allocates memory for a 2D
 *  grid of integers with the given width
 * and height. The grid is initialized with zeros.
 *
 * Return: A pointer to the allocated grid, or NULL if
 *  width or height is less than or equal to zero
 *         or if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{

			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

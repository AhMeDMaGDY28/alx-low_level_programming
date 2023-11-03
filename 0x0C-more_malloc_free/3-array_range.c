#include "main.h"
/**
 * array_range - Create an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Description:
 * This function creates an array of integers starting
 * from the minimum value (min)
 * up to the maximum value (max), inclusive. It allocates memory for the array.
 *
 * Return: A pointer to the created array, or NULL
 * if min is greater than max or if
 *         memory allocation fails.
 */
int *array_range(int min, int max)
{
	int i;
	int length = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		length++;
	}
	p = (int *)malloc(length * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}

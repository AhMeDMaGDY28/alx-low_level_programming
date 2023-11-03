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
	{
		int i, l;
		int *s;

		if (min > max)
		{
			return (0);
		}
		i = max - min + 1;
		s = malloc(sizeof(int) * i);
		if (s == 0)
		{
			return (0);
		}
		for (l = 0; l < i; l++)
		{
			s[l] = min;
			min++;
		}
		return (s);
	}

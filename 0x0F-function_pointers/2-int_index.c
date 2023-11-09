#include "function_pointers.h"
/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a comparison function to determine the match.
 *
 * Description:
 * This function searches for an integer in an
 * array using the provided comparison
 * function (cmp). If a match is found, it returns the
 * index of the first matching
 * element.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return:
 * - The index of the first matching element in the array.
 * - If no match is found or if array is NULL, size is less than or equal to 0,
 *   or cmp is NULL, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, p;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			p = (*cmp)(array[i]);
			if (p != 0)
			{
				return (i);
			}
		}
		return (-1);
	}

	return (-1);
}

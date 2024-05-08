#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * This function searches for a given value in an array using linear search,
 * also known as sequential search. It iterates through each element of the
 * array sequentially until it finds the target value or reaches the end of
 * the array. If the value is found, the function returns the index of the
 * value in the array. If the value is not found, the function returns -1.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array if found, otherwise -1.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

		for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

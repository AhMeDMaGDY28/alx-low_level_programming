#include "function_pointers.h"

/**
 * array_iterator - Apply a given function to each element of an integer array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to a function to be applied to each element.
 *
 * Description:
 * This function takes an array of integers and the
 * size of the array. It then applies
 * the provided function (action) to each element of the array.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: No return value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int *p;

	if (size > 0 && action != NULL && array != NULL)
	{
		p = (int *)malloc(size);
		for (i = 0; i < size; i++)
		{
			p[i] = array[i];
		}

		for (i = 0; i < size; i++)
		{
			(action)(p[i]);
		}
	}
}

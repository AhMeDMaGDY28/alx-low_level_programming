#include "main.h"
/**
 * reverse_array - Reverses an array of integers.
 *
 * @a: A pointer to the array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers pointed to by 'a' and
 * reverses the order of the elements in the array. It swaps the elements
 * starting from the beginning and end of the array, moving towards the center.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
void reverse_array(int *a, int n)
{
	int i, x, y;

	for (i = 0, x = (n - 1); i < x; i++)
	{
		y = a[i];
		a[i] = a[x];
		a[x] = y;
		x--;
	}
}

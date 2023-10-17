#include "main.h"

/**
 * print_array - Prints an array of integers to the standard output.
 *
 * @a: A pointer to the array of integers to be printed.
 * @n: The number of elements in the array.
 *
 * Description: This function prints the elements of the array pointed to by @a
 * to the standard output, separated by
 * a comma and space, and followed by a newline character.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}

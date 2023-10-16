#include "main.h"

/**
 * swap_int - Swaps the values of two integer pointers.
 *
 * @a: Pointer to an integer, which will take the value of @b.
 * @b: Pointer to an integer, which will take the value of @a.
 *
 * Description: This function swaps the values
 * of two integer pointers @a and @b.
 * It stores the value pointed to by @a
 * in a temporary variable, then assigns the
 * value of @b to @a, and finally assigns the temporary value to @b.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

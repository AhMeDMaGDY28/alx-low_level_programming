#include "main.h"

/**
 * print_diagonal - Print diagonal lines.
 *
 * @n: The number of diagonal lines to print.
 *
 * Description: This function prints a series of diagonal lines using the
 * backslash character '\' to the standard output. The number of diagonal
 * lines to print is specified by the parameter 'n'.
 *
 * @n: Number of diagonal lines to print.
 *
 * Return: No return value (void).
 *
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\n');
		_putchar('\\');
	}
	_putchar('\n');
}

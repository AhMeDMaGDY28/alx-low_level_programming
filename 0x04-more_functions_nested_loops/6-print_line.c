#include "main.h"

/**
 * print_line - Print a line of hyphens.
 *
 * @n: The number of hyphens to print.
 *
 * Description: This function prints a line of
 * hyphens '-' to the standard output.
 * The number of hyphens to print is specified by the parameter 'n'. If 'n' is
 * less than 0, it prints a newline character '\n'.
 *
 * @n: Number of hyphens to print. If n is less than 0, it prints a newline.
 *
 * Return: No return value (void).
 * ALX CO1 BLENDED
 * code made by ahmed magdy
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - Print a triangle made of # characters.
 *
 * @size: The size of the triangle to print.
 *
 * Description:
 * This function prints a triangle pattern made of '#' characters to the
 * standard output. The size of the triangle is determined by the parameter
 * 'size'.
 *
 * @size: Size of the triangle (number of rows).
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */
void print_triangle(int size)
{
	int z, x, c;

	z = 1;
	while (z <= size)
	{
		x = (size - z);
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		c = 1;
		while (c <= z)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		z++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}

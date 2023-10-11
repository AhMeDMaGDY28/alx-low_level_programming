#include "main.h"

/**
 * print_times_table - Prints the times table for a given number.
 * @a: The number for which the times table is printed.
 *
 * Description: This function prints the times table for a given number.
 * The numbers are separated by a comma and space.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
void print_times_table(int a)
{
	int x, y, z;

	if (a < 0 || a > 15)
		return;

	for (x = 0; x <= a; x++)
	{
		for (y = 0; y <= a; y++)
		{
			z = x * y;

			if (y == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (z < 10)
					_putchar(' ');
				if (z < 100)
					_putchar(' ');

				if (z >= 100)
					_putchar(z / 100 + '0');
				if (z >= 10)
					_putchar((z / 10) % 10 + '0');

				_putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}


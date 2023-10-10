#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: This function prints the 9 times table in a specific format.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (z < 10)
				{
					_putchar(' ');
					_putchar('0' + z);
				}
				else
				{
					_putchar('0' + (z / 10));
					_putchar('0' + (z % 10));
				}
			}
		}
		_putchar('\n');
	}
}


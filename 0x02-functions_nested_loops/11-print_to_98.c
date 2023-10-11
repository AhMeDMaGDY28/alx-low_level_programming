#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints natural numbers from n to 98.
 * Numbers are separated by a comma and space.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i + '0');
				_putchar('\n');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i + '0');
				_putchar('\n');
			}
		}
	}
}


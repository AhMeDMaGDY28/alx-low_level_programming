#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The starting number.
 *
 * Description: This function prints natural numbers from n to 98.
 * Numbers are separated by a comma and space.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}


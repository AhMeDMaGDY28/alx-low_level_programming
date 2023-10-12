#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 (excluding 2 and 4).
 *
 * Description: This function prints the numbers from
 * 0 to 9, excluding 2 and 4,
 * to the standard output using the _putchar function.
 * ALX CO1 BLENDED
 * code made by ahmed magdy
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		while (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}


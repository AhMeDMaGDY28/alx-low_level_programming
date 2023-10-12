#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9.
 *
 * Description: This function prints the numbers from 0 to 9 to the standard
 * output using the _putchar function.
 * code made by ahmed magdy
 * ALX CO1 BLENDED
 */

void print_numbers(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}


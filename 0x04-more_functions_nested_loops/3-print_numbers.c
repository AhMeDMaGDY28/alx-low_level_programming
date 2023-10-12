#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9.
 *
 * Description: This function prints the numbers from 0 to 9 to the standard
 * output using the _putchar function.
 * code made by ahmed magdy
 * ALX CO1 BLENDED
 */

void print_numbers(void);
{
	int i;

	char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	for (i = 1; i < 11; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}


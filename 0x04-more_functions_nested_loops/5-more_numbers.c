#include "main.h"

/*
 *more_numbers - Print the numbers from 0 to 14
 *ALX CO1 BLENDED
 *code made by ahmed magdy
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

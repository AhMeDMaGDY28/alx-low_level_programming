#include "main.h"

/*
 * more_numbers - Print the numbers from 0 to 14
 * Description: This function prints numbers from 0 to 14, ten times, using
 * the _putchar function. Each sequence is followed by a newline character.
 * ALX CO1 BLENDED
 * code made by ahmed magdy
 * Return: No return value (void).
 */

void more_numbers(void)
{
	int i;
	int a = 1;

	while (a <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}

			_putchar(i + '0');
		}
		a++;
	}
	_putchar('\n');
}

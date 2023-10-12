#include "main.h"

/**
 * more_numbers - Print the numbers from 0 to 14
 * Description: This function prints numbers from 0 to 14, ten times, using
 * the _putchar function. Each sequence is followed by a newline character.
 * ALX CO1 BLENDED
 * code made by ahmed magdy
 */
void more_numbers(void)
{
	int i;
	int a;

	i = 0;
	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
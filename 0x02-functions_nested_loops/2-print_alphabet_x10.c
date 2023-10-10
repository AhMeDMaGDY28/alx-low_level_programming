#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * This code is made to print the alphabet 10 times.
 *
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
void print_alphabet_x10(void)
{
	int n = 1;
	char c;

	while (n <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		n++;
	_putchar('\n');
}
}


# include "main.h"

/**
 *print_alphabet - prints the english alphabet from a-z
 *
 * This code is made to print the alphbet  one time.
 *
 * Code made by Ahmed Magdy.
 */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
{
	_putchar(c);
	c++;
}

	_putchar('\n');
}


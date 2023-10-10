# include "main.h"

/**
 * main - Entry point
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


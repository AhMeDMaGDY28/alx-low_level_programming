#include "main.h"

/**
 * print_number - Print an integer as characters.
 *
 * @X: The integer to be printed.
 *
 * Description: This function takes an integer and prints its digits as
 * characters to the standard output. If the integer is negative, it first
 * prints a minus sign '-' and then proceeds to print the absolute value of
 * the integer.
 *
 * @X: The integer to be printed.
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */
void print_number(int X)
{
	unsigned int num = X;

	if (X < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}

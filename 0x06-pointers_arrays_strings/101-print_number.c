#include "main.h"
/**
 * print_number - Prints an integer to the standard output.
 *
 * @n: The integer to be printed.
 *
 * Description: This function takes an
 * integer @n and prints it to the standard output
 * character by character. It handles
 * both positive and negative integers, converting
 * the integer into its individual digits and printing them.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}

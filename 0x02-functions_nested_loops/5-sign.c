#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * This function prints the sign of a number 'n':
 * - If 'n' is greater than zero, it prints '+'
 * - If 'n' is zero, it prints '0'
 * - If 'n' is less than zero, it prints '-'
 *
 * @n: The number to check
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero, -1 if 'n' is negative.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}


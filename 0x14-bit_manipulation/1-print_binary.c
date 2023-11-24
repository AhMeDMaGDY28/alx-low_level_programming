#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned integer to be printed in binary.
 *
 * Description: This function prints the binary representation of
 * a given unsigned integer.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	recursive_2(n);
}
/**
 * recursive_2 - Recursively prints the binary representation of a number.
 * @n: Unsigned integer to be printed in binary.
 *
 * Description: This function is used internally to recursively print
 * the binary representation of a given unsigned integer.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void recursive_2(unsigned long int n)
{

	if (n == 0)
		return;

	recursive_2(n >> 1);
	_putchar((n & 1) + '0');
}

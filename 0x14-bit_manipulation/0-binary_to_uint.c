#include "main.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Description: This function calculates the length
 * of the string pointed to by @s.
 *
 * Return: The length of the string (number of characters).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		if (!s)
		{
			return (0);
		}

		if (s[length] == '0' || s[length] == '1')
		{
			length++;
		}
		else
		{
			return (0);
		}
	}

	return (length);
}
/**
 * custom_pow - Computes the power of a number.
 * @base: The base.
 * @exponent: The exponent.
 *
 * Description: This function calculates the result of raising the base to the
 * power of the exponent.
 *
 * Return: The result of base raised to the power of exponent.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

unsigned int custom_pow(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}

	return (result);
}
/**
 * recursive - Converts binary to decimal using recursion.
 * @b: Binary representation.
 * @length: Length of the binary string.
 * @power: Exponential power.
 *
 * Description: This recursive function converts a binary string to its
 * decimal equivalent.
 *
 * Return: Decimal value of the binary string.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned int recursive(const char *b, unsigned int length, unsigned int power)
{
	unsigned int num, current_value, zero;

	zero = 0;
	if (length == 0)
		return (zero);

	if (b[length - 1] == '0' || b[length - 1] == '1')
	{
		num = (b[length - 1] - '0');

		current_value = num * custom_pow(2, power);
		return (current_value + recursive(b, length - 1, power + 1));
	}

	return (zero);
}
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Binary representation.
 *
 * Description: This function converts a binary string to its
 * decimal equivalent as an unsigned integer.
 *
 * Return: Decimal value of the binary string, or 0 if b is NULL
 * or contains characters other than '0' and '1'.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, zero = 0;

	if (!b)
		return (zero);
	length = _strlen(b);
	if (length == 0)
		return (0);

	if (b[length - 1] == '0' || b[length - 1] == '1')
	{
		return (recursive(b, length, 0));
	}

	return (zero);
}

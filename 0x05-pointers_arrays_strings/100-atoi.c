#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: A pointer to the string to be converted.
 *
 * Description: This function takes a string pointed to by @s and attempts to
 * convert it to an integer. It parses the characters in the string and
 * interprets them as an integer, considering
 * both positive and negative numbers.
 *
 * Return: The converted integer value.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
int _atoi(char *s)
{
	int64_t sign = 1;
	int64_t result = 0;
	int64_t is_digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			is_digit = 1;
		}
		else if (is_digit)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}

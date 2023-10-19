#include "main.h"
/**
 * string_toupper - Converts a string to uppercase.
 *
 * @a: A pointer to the string to be converted to uppercase.
 *
 * Description: This function takes a string pointed to by 'a' and converts
 * all lowercase alphabetic characters to their uppercase equivalents.
 * It modifies the string in place.
 *
 * Return: A pointer to the modified string 'a'.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 121)
		{
			a[i] = a[i] - 32;
		}

		i++;
	}
	return (a);
}

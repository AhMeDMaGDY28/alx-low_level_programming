#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{

	if (NULl) return (0);
	
	unsigned int num =0;
	int i=0;

	if (b != 1 || b != 0)
	{
		return (0);
	}
	else
	{
		while (length != 0)
		{
			b[i]
			
			length--;
		}
	}
}

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
unsigned int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

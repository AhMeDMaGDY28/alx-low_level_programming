#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * this code check for if c is uppercase
 * @c: The character to be checked
 * code made by ahmed magdy
 * ALX CO 1 BLENDED
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


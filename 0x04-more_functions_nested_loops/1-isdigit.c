#include "main.h"
/**
 * _isdigit - Check if a character is a digit (0-9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit (0-9), 0 otherwise.
 * made by ahmed magdy
 * ALX CO 1 BLENDED
*/


int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


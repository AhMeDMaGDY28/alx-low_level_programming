#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * This function checks if a character is an alphabetic character.
 * It checks if the ASCII value of 'c' is within
 * the range of alphabetic letters.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is an alphabetic character, 0 otherwise.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
int _isalpha(int c)
{
	int b;

	b = c;
	if ((b >= 97 && b <= 122) || (b >= 65 && b <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


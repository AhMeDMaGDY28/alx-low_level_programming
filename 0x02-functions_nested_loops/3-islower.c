#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * This function checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
int _islower(int c)
{
	int b;

	b = c;
	if (b >= 97 && b <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


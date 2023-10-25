#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 *
 * @s: A pointer to the string for which the length is to be calculated.
 *
 * Description: This function recursively calculates
 *  the length (number of characters)
 * of the string pointed to by 's.' It counts each character
 *  in the string until it
 * reaches the null terminator ('\0'), which marks the end of the string.
 *
 * Return: The length of the string as an integer.
 *  If the string is empty, it returns 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

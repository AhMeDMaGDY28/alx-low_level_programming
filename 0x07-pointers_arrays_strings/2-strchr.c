#include "main.h"
/**
 * _strchr - Locate character in string.
 *
 * @s: A pointer to the string to search.
 * @c: The character to search for within the string.
 *
 * Description: This function searches
 * for the first occurrence of character 'c'
 * (an unsigned char) in the string pointed to by 's.' It iterates through the
 * string and returns a pointer to the first occurrence of 'c' in the string.
 *
 * Return: A pointer to the first occurrence
 * of the character 'c' in the string 's.'
 * If 'c' is not found, the function returns NULL.
 */
char *_strchr(char *s, char c)
{
	int i, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}

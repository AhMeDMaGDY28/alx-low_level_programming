#include "main.h"
/**
 * _strpbrk - Search a string for any set of bytes.
 *
 * @s: A pointer to the null-terminated string to be searched.
 * @accept: A pointer to a null-terminated string
 *  containing the characters to search for.
 *
 * Description: This function searches the string 's' for the first occurrence
 * of any character that matches any
 * character in the 'accept' string. If a match is found,
 * it returns a pointer to the location of the first matching character in 's.'
 *
 * Return: A pointer to the first
 * occurrence of any character from 'accept' in 's' if found,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{

			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

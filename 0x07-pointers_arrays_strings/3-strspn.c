#include "main.h"
/**
 * _strspn - Get the length of a prefix substring.
 *
 * @s: A pointer to the null-terminated string to be searched.
 * @accept: A pointer to a null-terminated
 *  string containing the characters to match.
 *
 * Description: This function calculates the
 * length of the maximum initial segment
 * of the string 's' that consists of only
 *  characters that are part of the string 'accept.'
 * It iterates through the string 's' and counts
 *  the characters that match any character
 * from the 'accept' string, stopping when a character
 *  in 's' does not match any character
 * in 'accept' or when the end of 's' is reached.
 *
 * Return: The length of the maximum initial segment
 *  of 's' that contains only characters
 * from the 'accept' string.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return ((k - 2));
}

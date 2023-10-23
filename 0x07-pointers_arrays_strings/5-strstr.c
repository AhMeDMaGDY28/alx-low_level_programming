#include "main.h"
/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: A pointer to the null-terminated string to be searched.
 * @needle: A pointer to the null-terminated substring to search for.
 *
 * Description: This function searches for the first
 * occurrence of the null-terminated
 * substring 'needle' in the null-terminated string
 * 'haystack.' It iterates through the
 * characters in 'haystack' and compares them to the
 * characters in 'needle' to find a match.
 * If a match is found, it returns a pointer to the
 * location of the first character of the substring
 * within the 'haystack.' If no match is found, it returns NULL.
 *
 * Return: A pointer to the first occurrence of the 'needle'
 * substring in the 'haystack' string if found,
 * or NULL if no match is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (needle[k] == ' ')
			{
				k++;
			}

			if (haystack[i] == needle[k] && haystack[i + 1] == needle[k + 1] &&
			    haystack[i + 2] == needle[k + 2] && haystack[i + 3] == needle[k + 3]
				&& haystack[i + 4] == needle[k + 4] && haystack[i + 5] == needle[k + 5])
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}

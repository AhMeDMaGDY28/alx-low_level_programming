#include "main.h"

/**
 * string_nconcat - Concatenate n characters from two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 to concatenate.
 *
 * Description:
 * This function concatenates the first string, s1,
 * with the first n characters from
 * the second string, s2. It allocates memory for the resulting string.
 *
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int length = 0;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	p = (char *)malloc(sizeof(char) * (length + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i + length < length + n; i++)
	{
		p[i + length] = s2[i];
	}
	p[i + length] = '\0';
	return (p);
}

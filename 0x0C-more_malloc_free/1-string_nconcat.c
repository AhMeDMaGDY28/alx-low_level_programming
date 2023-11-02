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
	char *p;
	unsigned int i, z;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		length_s2++;
	}

	if (n >= length_s2)
	{
		n = length_s2;
	}

	p = (char *)malloc(sizeof(char) * (length_s1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[i + length_s1] = s2[i];
	}

	p[i + length_s1] = '\0';
	return (p);
}

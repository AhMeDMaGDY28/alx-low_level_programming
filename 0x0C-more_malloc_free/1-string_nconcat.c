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
	unsigned int length_s1 = 0, j = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}
	p = (char *)malloc(sizeof(char) * (length_s1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1 + n; i++)
	{
		if (s1[i])
			p[i] = s1[i];
		else
		{
			if (s2[j])
				p[i] = s2[j];
			else
				break;
		}
	}
	p[i] = '\0';
	return (p);
}

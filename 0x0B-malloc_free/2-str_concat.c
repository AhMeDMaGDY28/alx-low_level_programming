#include "main.h"
/**
 * str_concat - Concatenate two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * Description:
 * This function concatenates two strings and returns a pointer
 *  to the new concatenated string.
 * Return: A pointer to the concatenated string, or
 *  NULL if s1 and s2 are NULL or if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i, length_of_s2 = 0, length_of_s1 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		length_of_s1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length_of_s2++;
	}
	p = malloc(sizeof(char) * (length_of_s1 + length_of_s2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_of_s1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i <= length_of_s2; i++)
	{
		p[length_of_s1 + i] = s2[i];
	}
	p[length_of_s1 + length_of_s2 + 1] = '\0';
	return (p);
}

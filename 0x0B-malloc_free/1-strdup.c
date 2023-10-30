#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to be duplicated.
 *
 * Description:
 * This function duplicates a given string and returns
 *  a pointer to the duplicated string.
 *
 * Return: A pointer to the duplicated string, or NULL
 * if str is NULL or memory allocation fails.
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}

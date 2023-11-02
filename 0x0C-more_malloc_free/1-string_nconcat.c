#include "main.h"

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

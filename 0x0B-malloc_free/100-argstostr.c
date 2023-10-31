#include "main.h"
/**
 * argstostr - Concatenate command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: An array of command line argument strings.
 *
 * Description:
 * This function takes an array of command line
 *  argument strings and concatenates them into
 * a single string, separated by newline characters.
 * It allocates memory for the resulting string.
 *
 * Return: A pointer to the concatenated string, or NULL
 * if ac is 0, av is NULL, or memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len])
		{
			len++;
		}
		total_len += len + 1;
	}

	p = (char *)malloc(sizeof(char) * total_len);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len])
		{
			p[j++] = av[i][len++];
		}
		p[j++] = '\n';
	}

	p[j] = '\0';

	return (p);
}

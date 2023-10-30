#include "main.h"
/**
 * create_array - Create an array of characters
 *  initialized with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Description:
 * This function dynamically allocates an
 *  array of characters of a given size and
 * initializes all elements with the provided character.
 *
 * Return: A pointer to the created array, or NULL
 * if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (p == 0)
	{
		return (NULL);
	}

	return (p);
}

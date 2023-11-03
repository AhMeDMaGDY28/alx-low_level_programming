#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - Allocate and initialize memory for an array.
 * @nmemb: The number of elements.
 * @size: The size of each element in bytes.
 *
 * Description:
 * This function allocates memory for an array of elements,
 * each of the specified size,
 * and initializes all elements to 0.
 *
 * Return: A pointer to the allocated and initialized array,
 * or NULL if nmemb or size is 0
 *         or if memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}

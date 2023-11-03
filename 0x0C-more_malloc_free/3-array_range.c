#include "main.h"

int *array_range(int min, int max)
{
	int i;
	int length = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		length++;
	}
	p = (int *)malloc(length * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}

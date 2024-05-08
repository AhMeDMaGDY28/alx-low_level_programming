#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid = ((size - 1) / 2), half, end, start;

	while (i < size)
	{
		half = mid;

		printf("\n");
		if (value == array[half])
		{
			return (half);
		}
		if (value == array[half + 1])
		{
			return (half + 1);
		}
		if (value == array[half - 1])
		{
			return (half - 1);
		}

		if (value < array[half])
		{
			end = half;
			start = 0;
			mid = (half / 2);
			printf("Searching in array: ");
			for (i = start; i < end; i++)
			{
				printf("%d", array[i]);
			}
		}
		if (value > array[half])
		{
			end = size - 1;
			start = half;
			for (i = half; i <= end; i++)
			{
				printf("%d", array[i]);
			}
		}
	}

	return (-1);
}

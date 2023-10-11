#include "stdio.h"

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded).
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int maxlim = 1024;
	int s = 0;
	int i;

	for (i = 0; i < maxlim; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);

	return (0);
}


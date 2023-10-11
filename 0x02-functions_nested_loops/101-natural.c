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
	int sum = 0;
	int num;

	for (num = 0; num < maxlim; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}


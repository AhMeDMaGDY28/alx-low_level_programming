#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the sum of even Fibonacci numbers
 * below 4,000,000.
 *
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int theLimit = 1024;
	int theSum = 0;
	int num;

	for (num = 0; num < theLimit; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			theSum += num;
		}
	}

	printf("%d\n", theSum);

	return (0);
}

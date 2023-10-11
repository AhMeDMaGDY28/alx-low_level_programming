#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the sum of even Fibonacci numbers
 * below 4,000,000.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int nextTerm = 0;
	int limit = 4000000;
	int sum = 0;

	while (a <= limit)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		nextTerm = a + b;
		a = b;
		b = nextTerm;
	}

	printf("%d\n", sum);

	return (0);
}


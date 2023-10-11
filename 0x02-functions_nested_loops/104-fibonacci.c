#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 98 Fibonacci numbers whose values do not
 * exceed 4,000,000, starting with 1 and 2, separated by a comma and space,
 * followed by a new line.
 *
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long a = 1, b = 2, nextTerm, sum = 2;

	printf("%lu, %lu", a, b);

	while (1)
	{
		nextTerm = a + b;

		if (nextTerm > 4000000)
			break;

		if (nextTerm % 2 == 0)
			sum += nextTerm;

		printf(", %lu", nextTerm);

		a = b;
		b = nextTerm;
	}

	printf("\nSum of even Fibonacci numbers: %lu\n", sum);

	return (0);
}


#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the Fibonacci sequence
 * up to the first term that exceeds 4,000,000.
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

	printf("%d, %d, ", a, b);

	while (nextTerm <= limit)
	{
		nextTerm = a + b;
		if (nextTerm <= limit)
		{
			printf("%d", nextTerm);
			if (nextTerm != limit)
				printf(", ");
		}

		a = b;
		b = nextTerm;
	}

	printf("\n");

	return (0);
}


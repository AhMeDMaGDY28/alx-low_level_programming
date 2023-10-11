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
	int u;
	int i = 50;
	unsigned long int e = 1, f = 2;

	printf("%lu, %lu", e, f);

	for (u = 2; u < i; u++)
	{
		unsigned long int t = e + f;

		printf(", %lu", t);
		e = f;
		f = t;
	}
	printf("\n");

	return (0);
}

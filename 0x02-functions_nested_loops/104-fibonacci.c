#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 98 Fibonacci numbers separated by comma
 * and space, starting with 1 and 2, followed by a new line.
 *
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a = 1, b = 2, i;

	printf("%d, %d", a, b);

	for (i = 3; i <= 98; i++)
	{
		int nextTerm = a + b;

		printf(", %d", nextTerm);
		a = b;
		b = nextTerm;
	}

	printf("\n");

	return (0);
}


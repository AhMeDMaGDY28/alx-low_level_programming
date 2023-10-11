#include "stdio.h"

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i;
	int next;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", a);
		if (i < 50)
			printf(", ");
		else
			printf("\n");

		next = a + b;
		a = b;
		b = next;
	}

	return (0);
}


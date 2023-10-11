#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 98 Fibonacci numbers whose values do not
 * exceed 4,000,000, starting with 1 and 2, separated by a comma and space,
 * followed by a new line.
 *
 * Return: Always 0 to indicate success.
 */
int main(void)
{
	int printFirst98Fibonacci(void);
	printFirst98Fibonacci();
	return (0);
}

/**
 * printFirst98Fibonacci - Prints the first 98 Fibonacci numbers.
 *
 * Return: 0 to indicate success.
 */
int printFirst98Fibonacci(void)
{
	int count;
	unsigned long currentTerm1, currentTerm2, nextTerm, currentTerm1Thousands,
	currentTerm2Thousands, nextTermThousands, carry;

	count = 0;
	currentTerm1 = 0;
	currentTerm2 = 1;

	for (count = 1; count <= 91; count++)
	{
		nextTerm = currentTerm1 + currentTerm2;
		currentTerm1 = currentTerm2;
		currentTerm2 = nextTerm;
		printf("%lu, ", nextTerm);
	}

	currentTerm1Thousands = currentTerm1 % 1000;
	currentTerm1 = currentTerm1 / 1000;
	currentTerm2Thousands = currentTerm2 % 1000;
	currentTerm2 = currentTerm2 / 1000;

	while (count <= 98)
	{
		carry = (currentTerm1Thousands + currentTerm2Thousands) / 1000;
		nextTermThousands = (currentTerm1Thousands + currentTerm2Thousands)
		- carry * 1000;
		nextTerm = (currentTerm1 + currentTerm2) + carry;
		currentTerm1Thousands = currentTerm2Thousands;
		currentTerm2Thousands = nextTermThousands;
		currentTerm1 = currentTerm2;
		currentTerm2 = nextTerm;

		if (nextTermThousands >= 100)
			printf("%lu%lu", nextTerm, nextTermThousands);
		else
			printf("%lu0%lu", nextTerm, nextTermThousands);

		if (count != 98)
			printf(", ");

		count++;
	}

	putchar('\n');
	return (0);
}


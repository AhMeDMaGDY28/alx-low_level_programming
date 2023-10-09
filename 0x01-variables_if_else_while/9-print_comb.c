#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints all possible combinations of single-digit numbers.
 * Numbers must be separated by a comma and space.
 * Numbers are printed in ascending order.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}



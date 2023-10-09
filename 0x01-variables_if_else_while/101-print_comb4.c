#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints all possible different combinations of three digits
 * in ascending order, separated by a comma and space.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Description:
 * This program prints the numbers from 1 to 100, replacing numbers divisible
 * by 3 with "Fizz," numbers divisible by 5 with "Buzz," and numbers divisible
 * by both 3 and 5 with "FizzBuzz." All other numbers are printed as-is.
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

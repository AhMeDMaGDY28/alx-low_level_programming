#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description: This program calculates and prints the largest prime factor
 * of the number 612852475143. It reduces the number by dividing it by its
 * smallest prime factors starting from 2, and then checks for larger
 * prime factors.
 *
 * Return: Always 0 (Success).
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */
int main(void)
{
	long number = 612852475143;
	int increment;

	while (increment++ < number / 2)
	{
		if (number % increment == 0)
		{
			number /= 2;
			continue;
		}

		for (increment = 3; increment < number / 2; increment += 2)
		{
			if (number % increment == 0)
			{
				number /= increment;
			}
		}
	}

	printf("%ld\n", number);
	return (0);
}

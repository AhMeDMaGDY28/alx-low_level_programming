#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order
 * to print the last digit of the number stored in the variable n.
 * --------------------------
 * the code made by ahmed magdy
 */

int main(void)
{
	int n;

	/* Extract the last digit of n */
	int theLastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	the_Last_Digit_Of_N = n % 10;

	if (the_Last_Digit_Of_N > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			 n, the_Last_Digit_Of_N);
	}

	else if (the_Last_Digit_Of_N < 6 && the_Last_Digit_Of_N != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			 n, the_Last_Digit_Of_N);
	}

	else
	{
		printf("Last digit of %d is %d and is 0\n",
			 n, the_Last_Digit_Of_N);
	}

	return (0);
}

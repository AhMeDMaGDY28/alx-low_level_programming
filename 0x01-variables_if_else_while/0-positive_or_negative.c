#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order
 * to print whether the number stored in the variable n is
 * positive or negative.
 * code made by ahmed magdy hope it works
 * --------------------------
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%i is positive\n", n);
}
    else if (n < 0)
    {
        printf("%i is negative\n", n);
    }
    else if (n == 0)
    {
        printf("%i is zero\n", n);
    }
	return (0);
}

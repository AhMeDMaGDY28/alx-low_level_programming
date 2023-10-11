#include "stdio.h"

/**
 * main - Entry point of the program.
 *
 * Description: Computes and prints the Fibonacci sequence up to a limit.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    long long int a = 1;
    long long int b = 2;
    long long int nextTerm = 0;
    long long int limit = 4000000;
    long long int sum = 0;

    while (a <= limit)
    {
        if (a % 2 == 0)
        {
            sum += a;
        }

        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("%lld\n", sum);

    return (0);
}


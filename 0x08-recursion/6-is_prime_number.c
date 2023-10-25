#include "main.h"

/**
 * prime_check - Checks to see if number is prime
 *
 * @x: Factor check
 *
 * @y: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */

int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_check(x + 1, y));
}

/**
 * is_prime_number - States if number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

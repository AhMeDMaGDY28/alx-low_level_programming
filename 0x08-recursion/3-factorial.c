#include "main.h"
/**
 * factorial - Calculate the factorial of a given integer using recursion.
 *
 * @n: The integer for which the factorial is to be calculated.
 *
 * Description: This function recursively calculates
 *  the factorial of the given integer 'n.'
 * The factorial of a non-negative integer n, denoted as n!,
 *  is the product of all positive
 * integers from 1 to n. The function handles negative numbers
 *  by returning -1 and defines
 * the factorial of 0 as 1.
 *
 * Return: The factorial of 'n' as an integer. If 'n' is negative,
 *  it returns -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

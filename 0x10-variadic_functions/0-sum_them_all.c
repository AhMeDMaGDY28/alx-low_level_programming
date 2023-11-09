#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: A variable number of integer arguments.
 *
 * Description:
 * This function calculates the sum of a variable number
 * of integers passed as arguments.
 * The number of integers to sum is determined by the
 * 'n' parameter. It uses the va_arg
 * macro and a va_list to access the integer arguments.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}

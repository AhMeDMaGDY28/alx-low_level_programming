#include "main.h"
/**
 * _pow_recursion - Calculate the power of an integer using recursion.
 *
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Description: This function recursively calculates
 *  'x' raised to the power 'y'.
 * It handles negative exponents by returning -1 and
 *  defines any integer 'x' raised
 * to the power of 0 as 1. The function utilizes recursion
 *  to perform the calculation.
 *
 * Return: The result of 'x' raised to the power 'y' as an
 *  integer. If 'y' is negative,
 * it returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}

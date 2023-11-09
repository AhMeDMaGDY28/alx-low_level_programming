#include "3-calc.h"
/**
 * op_add - Add two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description:
 * This function takes two integers, 'a' and 'b', and returns their sum.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract two integers.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 *
 * Description:
 * This function takes two integers, 'a' and 'b', and returns their difference
 * (a - b).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The result of the subtraction operation (a - b).
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description:
 * This function takes two integers, 'a' and 'b', and returns
 * their product (a * b).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The result of the multiplication operation (a * b).
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two integers.
 * @a: The dividend (numerator).
 * @b: The divisor (denominator).
 *
 * Description:
 * This function takes two integers, 'a' and 'b', and
 * performs the division operation
 * (a / b). It checks if the divisor (b) is not equal to
 * zero to avoid division by zero.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The result of the division operation (a / b), or 0 if b is zero.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Calculate the remainder of dividing two integers.
 * @a: The dividend (numerator).
 * @b: The divisor (denominator).
 *
 * Description:
 * This function takes two integers, 'a' and 'b', and
 * calculates the remainder of
 * dividing 'a' by 'b' (a % b). It checks if the divisor
 * (b) is not equal to zero to
 * avoid division by zero.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: The remainder of the division operation (a % b), or 0 if b is zero.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

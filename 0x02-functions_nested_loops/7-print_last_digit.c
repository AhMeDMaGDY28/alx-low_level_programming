#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * This function prints the last digit of a number 'a'.
 *
 * @a: The number to extract the last digit from
 *
 * Return: The last digit of 'a'.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 */
int print_last_digit(int a)
{
	/* Calculate the last digit of 'a' */
	int b = a % 10;

	/* Print the last digit */
	_putchar('0' + b);

	return (b);
}


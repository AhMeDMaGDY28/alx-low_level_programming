#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string followed by a new newline
 * @str: The string to print
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
}

/**
 * _atoi - converts a string to an int
 * @s: pointer to string
 * Return: The converted integer
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int result = 0, first, index;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
		{
			sign *= -1;
		}
	}

	for (index = first; s[index] >= 48 && s[index] <= 57; index++)
	{
		result *= 10;
		result += (s[index] - 48);
	}

	return (sign * result);
}

/**
 * print_int - prints an integer
 * @n: The integer to print
 * Return: void
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1;
	unsigned long int index, result;

	for (index = 0; n / divisor > 9; index++, divisor *= 10)
	{
	}

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		result = n / divisor;
		_putchar('0' + result);
	}
}

/**
 * main - returns the product of two positive numbers
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3 || !_atoi(argv[1]) || !_atoi(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

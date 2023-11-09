#include "variadic_functions.h"
/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string to be printed between integers.
 * @n: The number of integers to print.
 * @...: A variable number of integer arguments.
 *
 * Description:
 * This function prints a variable number of integers
 * separated by the specified
 * separator string. The number of integers to print
 * is determined by the 'n' parameter.
 * It uses the va_arg macro and a va_list to access the integer arguments.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: No return value.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, a;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(args, unsigned int);
		printf("%d", a);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}

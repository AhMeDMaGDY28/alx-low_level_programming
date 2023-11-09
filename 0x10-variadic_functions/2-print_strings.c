#include "variadic_functions.h"
/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 * @...: A variable number of string arguments.
 *
 * Description:
 * This function prints a variable number of strings separated by the specified
 * separator string. The number of strings to print is
 * determined by the 'n' parameter.
 * It uses the va_arg macro and a va_list to access the
 * string arguments. If a NULL
 * pointer is encountered, it prints "(nil)" instead of the string.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: No return value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	putchar('\n');
}

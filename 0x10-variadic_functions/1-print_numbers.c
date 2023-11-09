#include "variadic_functions.h"

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

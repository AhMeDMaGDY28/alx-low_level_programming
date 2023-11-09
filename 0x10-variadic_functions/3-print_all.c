#include "variadic_functions.h"
/**
 * print_all - Print a variable number of values based on a format string.
 * @format: A format string indicating the types of values to print.
 * @...: A variable number of arguments corresponding to the format string.
 *
 * Description:
 * This function prints a variable number of values
 * based on the provided format string.
 * The format string specifies the types of values
 * to print ('c' for char, 'i' for int,
 * 'f' for float, 's' for string). The function uses
 * a va_list to access the arguments
 * and handles NULL strings by printing "(nil)".
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: No return value.
 */
void print_all(const char *const format, ...)
{
	char *sep = ", ";
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));

			break;
		case 'i':
			printf("%d", va_arg(args, int));

			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));

			break;
		case 's':
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf("%s", sep);
		i++;
	}
	va_end(args);
	putchar('\n');
}

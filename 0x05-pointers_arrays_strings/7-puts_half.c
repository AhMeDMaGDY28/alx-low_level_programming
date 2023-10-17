#include "main.h"
/**
 * puts_half - Prints the second half of a string to the standard output.
 *
 * @str: A pointer to the string to be processed.
 *
 * Description: This function calculates the
 * length of the string pointed to by @str,
 * and then prints the second half of the string to the standard output,
 * followed by a newline character.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
void puts_half(char *str)
{
	int length = 0, i, b, a = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	b = i;
	if (i % 2 == 0)
	{
		a = i / 2;
	}
	else
	{
		a = (i - 1) / 2;
	}
	while (a <= b)
	{
		a++;
		putchar(str[a]);
	}
		putchar(' ');
		printf("\n");
}

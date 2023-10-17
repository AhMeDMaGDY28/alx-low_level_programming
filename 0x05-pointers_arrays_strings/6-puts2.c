#include "main.h"
/**
 * puts2 - Prints every second character of a string to the standard output.
 *
 * @str: A pointer to the string to be processed.
 *
 * Description: This function calculates
 * the length of the string pointed to by @str,
 * and then prints every second character of the string to the standard output,
 * followed by a newline character.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
void puts2(char *str)

{
	int length = 0, i, a = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	i = length - 1;

	while (a <= i)
	{
		putchar(str[a]);
		a = a + 2;
	}
	printf("\n");
}

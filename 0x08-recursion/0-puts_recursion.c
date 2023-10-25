#include "main.h"
/**
 * _puts_recursion - Prints a string recursively, followed by a newline.
 *
 * @s: A pointer to a string to be printed.
 *
 * Description: This function prints the characters
 *  of the string pointed to by 's'
 * in a recursive manner. It prints each character
 *  one by one until the null terminator
 * '\0' is encountered, at which point it prints
 *  a newline character to move to the next line.
 *
 * Return: This function does not return a value (void).
 *  It recursively prints the string.
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}

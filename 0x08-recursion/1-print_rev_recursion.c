#include "main.h"
/**
 * _print_rev_recursion - Prints a string recursively in reverse order.
 *
 * @s: A pointer to a string to be printed in reverse order.
 *
 * Description: This function prints the characters
 *  of the string pointed to by 's'
 * in reverse order in a recursive manner. It starts
 *  from the end of the string and
 * prints characters one by one until it reaches the beginning of the string.
 *
 * Return: This function does not return a value (void).
 *  It recursively prints the string
 * in reverse order.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}

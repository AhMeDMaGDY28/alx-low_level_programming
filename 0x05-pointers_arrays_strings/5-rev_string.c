#include "main.h"
/**
 * rev_string - Reverses and prints a string to the standard output.
 *
 * @s: A pointer to the string to be reversed and printed.
 *
 * Description: This function calculates
 * the length of the string pointed to by @s,
 * and then prints the characters of the
 * string in reverse order to the standard output,
 * followed by a newline character.
 *
 * Return: No return value (void).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

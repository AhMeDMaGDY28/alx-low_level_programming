#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints the lowercase English alphabet from 'a' to 'z'
 * followed by the uppercase English alphabet from 'A' to 'Z'.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	char small_letter;
	char capital_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
	{
		putchar(small_letter);
	}

	for (capital_letter = 'A'; capital_letter <= 'Z'; capital_letter++)
	{
		putchar(capital_letter);
	}

	putchar('\n');

	return (0);
}


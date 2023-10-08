#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints the lowercase English alphabet from 'a' to 'z'.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}

	return (0);
}


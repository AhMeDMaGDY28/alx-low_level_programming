#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints the lowercase English alphabet in reverse order
 * from 'z' to 'a'.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}


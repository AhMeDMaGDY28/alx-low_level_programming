#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code prints the digits from '0' to '9' and the lowercase
 * English alphabet from 'a' to 'f' consecutively.
 * Code made by Ahmed Magdy
 */
int main(void)
{
	char letter;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}


#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * This code is made to print '_putchar' one time.
 * Code made by Ahmed Magdy.
 */
int main(void)
{
	char putchar[] = "_putchar";
	int c;

	for (c = 0; c <= 7; c++)
	{
		_putchar(putchar[c]);
	}

	_putchar('\n');

	return (0);
}


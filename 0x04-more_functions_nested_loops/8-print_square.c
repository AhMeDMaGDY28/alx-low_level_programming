#include "main.h"

/**
 * print_square - Print a square of '#' characters.
 *
 * @size: The size of the square to print.
 *
 * Description: This function prints a square of '#' characters to the standard
 * output. The size of the square is specified by the parameter 'z'.
 *
 * @size: Size of the square (side length).
 *
 * Return: No return value (void).
 *
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */

void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

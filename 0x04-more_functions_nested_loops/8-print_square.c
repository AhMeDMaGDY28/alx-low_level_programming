#include "main.h"

/**
 * print_square - Print a square of '#' characters.
 *
 * @z: The size of the square to print.
 *
 * Description: This function prints a square of '#' characters to the standard
 * output. The size of the square is specified by the parameter 'z'.
 *
 * @z: Size of the square (side length).
 *
 * Return: No return value (void).
 *
 * ALX CO1 BLENDED
 * Code made by Ahmed Magdy.
 */

void print_square(int z)
{
	int i, x;

	if (z == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < z; i++)
		{
			for (x = 0; x < z; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

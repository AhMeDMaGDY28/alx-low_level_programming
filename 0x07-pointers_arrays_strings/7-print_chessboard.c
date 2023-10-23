#include "main.h"

/**
 * print_chessboard - Prints the chessboard represented as a 2D array.
 *
 * @a: A 2D array representing the chessboard.
 *
 * Description: This function takes a 2D array
 *  'a' representing a chessboard and prints
 * the content of the chessboard to the standard
 *  output (console). Each element in the
 * 2D array represents a cell on the chessboard,
 *  and this function prints each cell's
 * content in row-major order.
 *
 * Return: This function does not return a value
 *  (void). It only prints the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int row, colum;

	for (row = 0; row < 8; row++)
	{
		for (colum = 0; colum < 8; colum++)
		{
			putchar(a[row][colum]);
		}
		putchar('\n');
	}
}

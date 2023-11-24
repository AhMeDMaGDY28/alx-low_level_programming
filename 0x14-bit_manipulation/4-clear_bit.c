#include "main.h"
/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: Pointer to an unsigned integer.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 * Description: This function clears the value of the bit at a given index
 * to 0 in the binary representation of the provided unsigned integer.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

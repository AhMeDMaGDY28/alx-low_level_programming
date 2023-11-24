#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to an unsigned integer.
 * @index: Index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 * Description: This function sets the value of the bit at a given index
 * to 1 in the binary representation of the provided unsigned integer.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

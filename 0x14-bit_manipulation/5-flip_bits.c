#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to flip to convert one
 * number to another.
 * @n: First unsigned integer.
 * @m: Second unsigned integer.
 *
 * Return: Number of bits needed to flip.
 *
 * Description: This function counts the number of
 * bits needed to flip in order to
 * convert one unsigned integer to another. It performs XOR operation
 * between the two numbers and counts the set bits in the result.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;

	x = 0;
	n = n ^ m;
	while (n)
	{
		x += n & 1;
		n >>= 1;
	}
	return (x);
}

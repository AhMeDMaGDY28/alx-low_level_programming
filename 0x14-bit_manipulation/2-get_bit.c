/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: Unsigned integer.
 * @index: Index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if an error occurred.
 *
 * Description: This function returns the value of the bit at a given index
 *              in the binary representation of the provided unsigned integer.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}

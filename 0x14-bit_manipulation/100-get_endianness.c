#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
 *
 * Description: This function checks the endianness of the system by
 * examining the byte order of an integer. It returns 1 if
 * the system is little-endian, and 0 if it is big-endian.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}

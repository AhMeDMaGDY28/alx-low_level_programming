#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc and
 *  check for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Description:
 * This function allocates memory using `malloc` for
 *  a specified number of bytes and
 * checks if the allocation was successful.
 *  If the allocation fails, it exits with
 * an error code (98).
 *
 * Return: A pointer to the allocated memory if successful.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	exit(98);
}

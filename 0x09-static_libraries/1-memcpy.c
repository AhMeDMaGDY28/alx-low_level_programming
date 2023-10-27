#include "main.h"
/**
 * _memcpy - Copy memory area.
 *
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy from 'src' to 'dest.'
 *
 * Description: This function copies 'n' bytes
 * from the memory area pointed to by 'src'
 * to the memory area pointed to by 'dest.' The
 *  function iterates through both memory
 * areas and copies the bytes from 'src' to 'dest.'
 *
 * Return: A pointer to the destination memory area 'dest' after copying.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

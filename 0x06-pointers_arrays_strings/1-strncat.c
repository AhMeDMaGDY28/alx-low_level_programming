#include "main.h"
/**
 * _strncat - Concatenates two strings up to 'n' characters.
 *
 * @dest: A pointer to the destination
 * string where the concatenation will be stored.
 * @src: A pointer to the source string to be concatenated to the destination.
 * @n: The maximum number of characters to concatenate from 'src.'
 *
 * Description: This function appends
 * (concatenates) up to 'n' characters from the source
 * string pointed to by 'src' to the end
 * of the destination string pointed to by 'dest'.
 *
 * Return: A pointer to the destination string 'dest' after the concatenation.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, y;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (y = 0; y < n && src[y]; y++)
	{
		dest[length + y] = src[y];
	}
	dest[length + y] = '\0';

	return (dest);
}

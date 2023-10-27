#include "main.h"
/**
 * _strncpy - Copies 'n' characters from the 'src' string to 'dest.'
 *
 * @dest: A pointer to the destination string where the copy will be stored.
 * @src: A pointer to the source string from which characters will be copied.
 * @n: The maximum number of characters to copy from 'src.'
 *
 * Description: This function copies up to
 * 'n' characters from the 'src' string to the
 * 'dest' string. If 'src' contains fewer
 * than 'n' characters, the remaining characters in
 * 'dest' are filled with null ('\0') characters.
 *
 * Return: A pointer to the destination string 'dest' after the copy.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

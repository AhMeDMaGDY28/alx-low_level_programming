#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the destination
 * string where the concatenation will be stored.
 * @src: A pointer to the source string to be concatenated to the destination.
 *
 * Description: This function appends
 * (concatenates) the characters from the source
 * string pointed to by 'src' to
 * the end of the destination string pointed to by 'dest'.
 *
 * Return: A pointer to the destination string 'dest' after the concatenation.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
char *_strcat(char *dest, char *src)
{
	int length, i, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	j = 0;
	for (i = length; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = src[j];
	return (dest);

}

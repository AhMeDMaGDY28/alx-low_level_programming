#include "main.h"
#include <string.h>
/**
 * _strcpy - Copies a string from the source to the destination.
 *
 * @dest: A pointer to the destination string where the copy will be stored.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function copies
 * the characters from the source string pointed
 * to by @src to the destination string pointed to by @dest.
 *
 * Return: A pointer to the destination string @dest.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

#include "main.h"
/**
 * rot13 - Applies the ROT13 substitution cipher to a string.
 *
 * @x: A pointer to the string to be encrypted using ROT13.
 *
 * Description: This function takes a string pointed to by @s and applies
 * the ROT13 substitution cipher to it. ROT13 is a simple letter substitution
 * cipher that replaces a letter with the 13th letter after it in the alphabet.
 * It works for both uppercase and lowercase letters, leaving non-alphabetical
 * characters unchanged.
 *
 * Return: A pointer to the modified string @s with ROT13 applied.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

char *rot13(char *x)
{
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int d, e;

	for (d = 0; x[d] != '\0'; d++)
	{
		e = 0;
		while (e < 52)
		{
			if (x[d] == b[e])
			{
				x[d] = c[e];
				break;
			}
			e++;
		}
	}
	return (x);
}
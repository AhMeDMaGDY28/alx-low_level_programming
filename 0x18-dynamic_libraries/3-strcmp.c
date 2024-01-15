#include "main.h"
/**
 * _strcmp - Compares two strings character by character.
 *
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Description: This function compares
 * two strings, `s1` and `s2`, character by character.
 * It computes the difference in character values between the two strings.
 * If the strings are equal, the function returns 0. If they are different,
 * it returns a non-zero value indicating the difference between the first
 * differing characters in the strings.
 *
 * Return: An integer representing the difference between the strings.
 * 0 if the strings are equal,
 * a positive or negative value if they are different.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, the_deffrence;

	a = 0;
	b = 0;
	c = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		b = b + s1[a];
		c = c + s2[a];
		a++;
		if (b != c)
			break;
	}
	the_deffrence = b - c;
	return (the_deffrence);
}

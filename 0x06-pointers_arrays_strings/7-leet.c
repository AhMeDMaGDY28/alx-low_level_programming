#include "main.h"
/**
 * leet - Converts a string to "leet" (1337) language.
 *
 * @str: A pointer to the string to be transformed.
 *
 * Description: This function takes a string pointed to by 'str' and replaces
 * certain characters with their corresponding "leet" (1337) characters.
 * The characters replaced are 'A' or 'a' with '4', 'E' or 'e' with '3',
 * 'O' or 'o' with '0', 'T' or 't' with '7', and 'L' or 'l' with '1'.
 *
 * Return: A pointer to the transformed string 'str'.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

char *leet(char *str)
{
	int i, j;
	char leetChars[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (leetChars[j] == str[i])
				str[i] = leetReplacements[j];
		}
	}
	return (str);
}

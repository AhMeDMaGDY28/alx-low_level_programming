#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 * made by ahmed magdy
 * ALX CO 1 BLENDED
*/

char *cap_string(char *str)
{
	int idx = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[idx])
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			if (idx == 0)
				str[idx] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separators[j] == str[idx - 1])
						str[idx] -= 'a' - 'A';
				}
			}
		}
		idx++;
	}
	return (str);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random password of a specified length.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

int main(void)
{
	int totalCharacters = 0, currentCharacter = 0;
	time_t seed;

	srand((unsigned int)time(&seed));

	while (totalCharacters < 2772)
	{

		currentCharacter = rand() % 128;

		if ((totalCharacters + currentCharacter) > 2772)
		{
			break;
		}

		totalCharacters = totalCharacters + currentCharacter;

		printf("%c", currentCharacter);
	}

	printf("%c\n", (2772 - totalCharacters));

	return (0);
}

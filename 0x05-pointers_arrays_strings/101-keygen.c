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
#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEF
	    GHIJKLMNOPQRSTUVWXYZ0123456789 ";

	    int charset_length = sizeof(charset) - 1;

	srand((unsigned)time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_length];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);
	return (0);
}

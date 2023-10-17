#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_length = sizeof(charset) - 1;

	srand((unsigned)time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_length];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);
	return (0);
}

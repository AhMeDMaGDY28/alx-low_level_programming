#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: the number of arguments
 * @argv: the arguments passed to the program
 * Return: 0 for success, 1 for errors
 */
int main(int argc, char *argv[])
{
	int i, num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}

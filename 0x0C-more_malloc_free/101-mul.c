#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply two numbers provided as command-line arguments.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	unsigned long product;
	int argIndex, charIndex;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (argIndex = 1; argIndex < argc; argIndex++)
	{
		for (charIndex = 0; argv[argIndex][charIndex] != '\0'; charIndex++)
		{
			if (argv[argIndex][charIndex] > '9' || argv[argIndex][charIndex] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	product = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", product);
	return (0);
}

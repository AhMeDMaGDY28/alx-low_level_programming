#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display the opcodes of this program's main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Description:
 * This program takes a single command-line argument, which is expected to be a
 * non-negative integer. If the argument is provided
 * and non-negative, the program
 * prints the opcodes of its own `main` function. It
 * does this by treating the `main`
 * function as an array of bytes.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: 0 on success, 1 for incorrect number of
 * arguments, 2 for a negative integer.
 */
int main(int argc, char *argv[])
{
	int i, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < x - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

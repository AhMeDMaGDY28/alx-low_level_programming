#include <stdio.h>
/**
 * main - Entery point to the program
 * @argc: the number of arguments
 * @argv: the argument written in running the program
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

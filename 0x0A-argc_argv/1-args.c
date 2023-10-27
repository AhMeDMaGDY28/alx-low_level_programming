#include <stdio.h>
/**
 * main - Entery point to the program
 * @argc: the number of arguments
 * @argv: the argument written in running the program
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point to the program
 * @argc: the number of arguments
 * @argv: the argument written in running the program
 * Return:  the return may be 0 or 1 1 if there is proplem
 *  in entering the argments
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);

		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

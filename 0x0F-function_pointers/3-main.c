#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Description:
 * This program serves as a simple calculator that performs
 * mathematical operations.
 * It takes three command-line arguments: two integers and
 * an operator. The program
 * validates the input, selects the appropriate operation
 * function based on the operator,
 * and performs the calculation. The result is then printed
 * to the standard output.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: 0 on success, 98 for incorrect number of arguments, 99 for
 * an invalid operator.
 */
int main(int argc, char **argv)
{
	int (*oprt)(int, int);
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	c = oprt(a, b);
	printf("%i\n", c);
	return (0);
}

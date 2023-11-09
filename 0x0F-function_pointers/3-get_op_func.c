#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Select and return the appropriate operation function.
 * @s: The operator string.
 *
 * Description:
 * This function takes an operator string (s) and returns a pointer to the
 * appropriate operation function based on the provided operator. It searches
 * for a matching operator in an array of operator structures and returns the
 * corresponding function pointer.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 *
 * Return: A pointer to the selected operation function, or NULL if no matching
 *         operator is found.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (0);
}

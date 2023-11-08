#include "function_pointers.h"
/**
 * print_name - Print a name using a provided function.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 *
 * Description:
 * This function takes a name and a pointer to a
 * function that is responsible for
 * printing the name. It calls the provided function to print the name.
 *
 * Return: No return value.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

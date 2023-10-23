#include "main.h"

/**
 * set_string - Sets the value of a pointer to a new string.
 *
 * @s: A pointer to a pointer that will be updated with a new string value.
 * @to: A pointer to the string to which 's' will be set.
 *
 * Description: This function takes
 *  a pointer to a pointer 's' and a pointer 'to'
 * that points to a string. It updates
 *  the value of 's' to point to the same string
 * that 'to' points to. Essentially, it assigns
 *  's' to the address of 'to', making 's'
 * reference the same string as 'to'.
 *
 * Return: This function does not return
 *  a value (void). It modifies the pointer 's'.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

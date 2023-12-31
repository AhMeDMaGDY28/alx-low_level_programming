#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates
 * a pointer manipulation by changing the
 * value of an integer pointed to by a
 * pointer @p. It sets the value of the integer
 * to 98 using pointer arithmetic, without directly modifying the variable @n.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
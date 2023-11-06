#include "dog.h"
/**
 * print_dog - Print the details of a dog structure.
 * @d: A pointer to the dog structure to print.
 *
 * Description:
 * This function prints the details of a dog structure, including its name, age, and owner.
 * If the pointer to the dog structure (d) is not NULL, it prints the information. If d is NULL,
 * the function does nothing.
 *
 * Return: No return value.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		return;
	}
}
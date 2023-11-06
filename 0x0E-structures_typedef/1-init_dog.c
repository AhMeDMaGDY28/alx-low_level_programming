#include "dog.h"
/**
 * init_dog - Initialize a dog structure with name, age, and owner.
 * @d: A pointer to a dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 * This function initializes a dog structure with the provided name, age, and owner.
 *
 * Return: No return value.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}

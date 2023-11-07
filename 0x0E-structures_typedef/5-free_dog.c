#include "dog.h"
/**
 * free_dog - Free memory allocated for a dog structure.
 * @d: A pointer to the dog structure to free.
 *
 * Description:
 * This function frees the memory allocated for a dog
 * structure, including its name,
 * owner, and the structure itself.
 *
 * Return: No return value.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

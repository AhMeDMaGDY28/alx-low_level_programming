#include "dog.h"
#include <string.h>
/**
 * new_dog - Create a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 * This function creates a new dog structure and initializes
 *  its name, age, and owner
 * using the provided parameters. It allocates memory
 *  for the new structure and the
 * name and owner strings.
 *
 * Return: A pointer to the new dog structure, or NULL if memory
 *  allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_1;
	char *owner_1;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_1 = strdup(name);
	owner_1 = strdup(owner);
	if (name_1 == NULL || owner_1 == NULL)
	{
		free(new_dog);
		free(name_1);
		free(owner_1);
		return (NULL);
	}

	new_dog->name = name_1;
	new_dog->age = age;
	new_dog->owner = owner_1;
	return (new_dog);
}

#include "dog.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Description: This function calculates the length
 * of the string pointed to by @s.
 *
 * Return: The length of the string (number of characters).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * _strcpy - Copies a string from the source to the destination.
 *
 * @dest: A pointer to the destination string where the copy will be stored.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function copies
 * the characters from the source string pointed
 * to by @src to the destination string pointed to by @dest.
 *
 * Return: A pointer to the destination string @dest.
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 * This function creates a new dog structure and
 * initializes its name, age, and owner
 * using the provided parameters. It allocates memory
 * for the new structure and the
 * name and owner strings, and then copies the provided strings.
 *
 * Return: A pointer to the new dog structure, or NULL if
 * memory allocation fails.
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int length_name, Length_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	length_name = _strlen(name);
	new_dog->name = malloc((length_name + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->age = age;

	Length_owner = _strlen(owner);
	new_dog->owner = malloc((Length_owner + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}

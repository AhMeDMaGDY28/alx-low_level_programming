#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * This function creates a hash table with a given size. If memory allocation
 * fails, it returns NULL.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	hash_node_t **node;

	newtable = calloc(1, sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = calloc(size, sizeof(node));

	if (newtable->array == NULL)
		return (NULL);
	return (newtable);
}

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
	hash_table_t *array_t;
	hash_node_t **node;

	array_t = malloc(sizeof(hash_table_t));
	if (!array_t)
		return NULL;
	node = calloc(size, sizeof(char *));
	if (!node)
	{
		free(node);
		return NULL;
	}
	array_t->size = size;
	array_t->array = node;
	return (array_t);
}

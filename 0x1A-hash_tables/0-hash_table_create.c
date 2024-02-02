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
	hash_table_t *array_creator;
	hash_node_t **node;
	array_creator = malloc(sizeof(hash_table_t));
	if (!array_creator)
		return NULL;
	array_creator->size = size;
	array_creator->array = malloc(size * sizeof(node));
	if (!array_creator->array )
		return NULL;
	return array_creator;
}

#include "hash_tables.h"

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

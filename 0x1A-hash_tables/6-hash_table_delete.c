#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: A pointer to the hash table.
 *
 * This function deletes a hash table and its elements. It first checks if
 * the hash table is valid. Then it iterates through each bucket of the hash
 * table and deletes the nodes in the linked lists. Finally, it frees the
 * memory allocated for the array of buckets and the hash table itself.
 *
 * Return: No return value.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			delete_nodes(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}

/**
 * delete_nodes - Deletes nodes in a linked list.
 * @node: A pointer to the head of the linked list.
 *
 * This function recursively deletes nodes in a linked list. It starts from
 * the head of the list and traverses it recursively until it reaches the end.
 * For each node, it frees the memory allocated for the key, value, and the
 * node itself.
 *
 * Return: No return value.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void delete_nodes(hash_node_t *node)
{
	if (node)
	{
		delete_nodes(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}

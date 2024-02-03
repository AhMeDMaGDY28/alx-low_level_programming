#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to search for.
 *
 * This function retrieves the value associated with a key in a hash table.
 * It first checks if the hash table and key are valid. Then it calculates
 * the index for the key using the key_index function and traverses the
 * linked list at that index to find the node with the matching key.
 *
 * Return: The value associated with the key if found, or NULL if not found.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *mover;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	mover = ht->array[index];
	while (mover && strcmp(mover->key, key))
		mover = mover->next;
	if (mover && !strcmp(mover->key, key))
		return (mover->value);
	return (NULL);
}

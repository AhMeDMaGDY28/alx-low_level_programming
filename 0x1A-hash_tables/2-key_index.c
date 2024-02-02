#include "hash_tables.h"
/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key to compute the index for.
 * @size: The size of the hash table.
 *
 * This function computes the index of a given
 * key in a hash table of a given size.
 * It uses the djb2 hash algorithm to
 * generate the hash value, and then computes
 * the index by taking the remainder of the hash
 * value divided by the size of the
 * hash table.
 *
 * Return: The computed index of the key.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}

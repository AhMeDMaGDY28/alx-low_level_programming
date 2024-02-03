#include "hash_tables.h"
/**
 * hash_table_print - Prints the elements of a hash table.
 * @ht: A pointer to the hash table.
 *
 * This function prints the elements of a hash table in the following format:
 * {key1: value1, key2: value2, ...}.
 * It traverses each bucket of the hash table
 * and prints the key-value pairs of each node in the linked list.
 *
 * Return: No return value.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}

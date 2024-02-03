#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	long unsigned int i;
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

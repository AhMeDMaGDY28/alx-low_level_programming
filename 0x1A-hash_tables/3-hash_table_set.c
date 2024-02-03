#include "hash_tables.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to be duplicated.
 *
 * Description:
 * This function duplicates a given string and returns
 *  a pointer to the duplicated string.
 *
 * Return: A pointer to the duplicated string, or NULL
 * if str is NULL or memory allocation fails.
 */
char *_strdup(const char *str)
{
	int i;
	int length = 0;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key of the element to add.
 * @value: The value of the element to add.
 *
 * This function adds an element to a hash table. It first checks if the key
 * and hash table are valid. Then it duplicates the key and value strings to
 * ensure they are stored separately in memory. It calculates the index for
 * the key using the key_index function, and then calls the set_table function
 * to add the element to the appropriate position in the hash table.
 *
 * Return: 1 if the operation is successful, 0 otherwise.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_key, *new_value;

	if (!strlen(key) || !key || !ht)
		return (0);
	new_key = _strdup(key);
	new_value = _strdup(value);
	index = key_index((unsigned char *)new_key, ht->size);

	return (set_table(&ht->array[index], new_key, new_value));
}
/**
 * set_table - Sets a key-value pair in a hash table bucket.
 * @head: A pointer to the pointer to the head of the bucket.
 * @key: The key to set.
 * @value: The value to set.
 *
 * This function sets a key-value pair in a hash table bucket. It searches
 * the bucket for an existing node with the same key. If found, it updates
 * the value of the existing node. Otherwise, it creates a new node and
 * inserts it at the beginning of the bucket.
 *
 * Return: 1 if the operation is successful, 0 otherwise.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int set_table(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new, *current;

	current = *head;
	while (current && strcmp(current->key, key))
		current = current->next;
	if (current && !strcmp(current->key, key))
	{
		free(current->value);
		current->value = value;
		free(key);
		return (1);
	}

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = key;
	new->value = value;
	new->next = *head;
	*head = new;
	return (1);
}

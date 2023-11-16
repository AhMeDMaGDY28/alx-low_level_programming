#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_first;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	new_first = (list_t *)malloc(sizeof(list_t));
	if (!new_first)
	{
		return (NULL);
	}
	new_first->str = strdup(str);
	new_first->len = length;
	new_first->next = *head;
	*head = new_first;
	return (*head);
}

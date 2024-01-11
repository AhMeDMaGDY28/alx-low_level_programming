#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * This function adds a new node with the given integer value at the beginning
 * of a doubly linked list. If memory allocation fails, it returns NULL.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (!*head)
		(*head)->prev = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

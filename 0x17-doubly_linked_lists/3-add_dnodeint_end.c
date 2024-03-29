#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_last_node, *tmp;

	new_last_node = malloc(sizeof(dlistint_t));
	if (!new_last_node)
		return (NULL);
	new_last_node->next = NULL;
	new_last_node->n = n;
	tmp = *head;
	if (!tmp)
	{
		*head = new_last_node;
		new_last_node->prev = NULL;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_last_node;
		new_last_node->prev = tmp;
	}
	return (new_last_node);
}

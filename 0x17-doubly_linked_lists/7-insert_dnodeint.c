#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given index in a doubly linked list.
 * @h: A pointer to the pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * This function inserts a new node with the
 * specified integer value at the given index
 * in a doubly linked list. If the index is
 * out of bounds or memory allocation fails,
 * it returns NULL.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *coming = *h, *old, *new_node;
	unsigned int counter = 0, tester = nodes_count(*h);

	if (idx > tester)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (counter == idx - 1)
			old = curr;
		if (counter == idx)
		{
			coming = curr;
			new_node->prev = old;
			new_node->next = coming;
			old->next = new_node;
			if (coming)
				coming->prev = new_node;
			return (new_node);

		}
		counter++;
		curr = curr->next;
	}
	free(new_node);
	return (NULL);
}


/**
 * nodes_count - Counts the number of nodes in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function counts the number of nodes in the given doubly linked list.
 *
 * Return: The number of nodes in the list.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned int nodes_count(dlistint_t *head)
{
	unsigned int count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}

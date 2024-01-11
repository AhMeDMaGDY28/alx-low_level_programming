#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node at a
 * given index in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to be retrieved.
 *
 * This function returns a pointer to the node at the specified index in the
 * given doubly linked list. If the index is out of bounds, it returns NULL.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *x;
	unsigned int counter = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		counter++;
		head = head->next;
		if (counter == index)
		{
			x = head;
		}
	}
	return (x);
}

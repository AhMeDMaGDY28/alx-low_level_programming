#include "lists.h"
/**
 * get_nodeint_at_index - Gets the node at a given index in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Description: This function returns the node at the specified index in the
 * linked list. If the index is out of range, it returns NULL.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x = head;
	unsigned int node_num = 0;

	/*x = (listint_t *)malloc(sizeof(listint_t));*/
	if (!x)
	{
		return (NULL);
	}

	while (head)
	{
		head = head->next;
		node_num++;
		if (node_num == index)
		{
			x->n = head->n;
		}
	}
	if (index > node_num)
	{
		return (NULL);
	}

	return (x);
}

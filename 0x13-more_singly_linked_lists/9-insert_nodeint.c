#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given
 *  position in a linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function inserts a new node with the given value at the
 * specified position in the linked list. If the index is invalid, the function
 * does not insert the node and returns NULL.
 *
 * Return: If the new node is inserted successfully, a pointer to the new node.
 * Otherwise, NULL.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *work, *limit;
	unsigned int curr = 0, max_nodes;

	limit = *head;
	max_nodes = list_len(limit);
	if (idx > max_nodes)
	{
		return(NULL);
	}
	
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	work = *head;
	while (work)
	{

		if (curr == (idx - 1))
		{
			tmp = work->next;
			work->next = new_node;
		}

		if (curr == idx)
		{

			new_node->next = tmp;
		}
		work = work->next;
		curr++;
	}

	return (new_node);
}

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Description: This function counts the number of nodes in a linked list.
 *
 * Return: The number of nodes in the list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned int list_len(listint_t *h)
{
	int num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}

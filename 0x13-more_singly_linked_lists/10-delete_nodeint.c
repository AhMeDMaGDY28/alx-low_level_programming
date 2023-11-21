#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at
 * a given position in a linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Description: This function deletes the node at the specified position in the
 * linked list. If the index is invalid, the function does not delete any node.
 *
 * Return: If the node is deleted successfully, 1. Otherwise, -1.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *limit = *head, *list_mover = *head, *tmp;
	unsigned int curr = 0, max_nodes;

	max_nodes = list_len(limit);
	if (!head || !*head || index > max_nodes)
	{
		free(limit);
		return (-1);
	}

	if (index == 0)
	{
		*head = list_mover->next;
		free(list_mover);
		return (1);
	}
	else
	{
		while (list_mover->next && (curr + 1) != index)
		{
			list_mover = list_mover->next;
			curr++;
		}
		if (curr + 1 == index)
		{
			tmp = list_mover->next;
			list_mover->next = tmp->next;
			free(tmp);
			return (1);
		}

		return (-1);
	}
}

/**
 * list_len - Counts the number of nodes in a linked list.
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

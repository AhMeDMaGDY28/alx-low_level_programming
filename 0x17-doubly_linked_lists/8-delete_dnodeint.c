#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at
 * a given position in a doubly linked list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Description: This function deletes the node at the specified position in the
 * doubly linked list. If the index is invalid,
 * the function does not delete any node.
 *
 * Return: If the node is deleted successfully, 1. Otherwise, -1.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list_mover, *tmp;
	unsigned int curr = 0;

	if (!head || !*head)
		return (-1);
	list_mover = *head;
	if (index == 0)
	{
		*head = list_mover->next;

		if (*head)
			(*head)->prev = NULL;
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
			if (tmp->next)
				tmp->next->prev = list_mover;
			free(tmp);
			return (1);
		}
		return (-1);
	}
}

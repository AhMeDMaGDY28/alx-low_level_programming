#include "lists.h"
/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function frees each node in a linked list, starting from
 * the head, and sets the head to NULL.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}
	if (*head)
	{
		while ((*head)->next)
		{
			tmp = (*head)->next;
			free((*head));
			(*head) = tmp;
		}
		free((*head));
		*head = NULL;
	}
}

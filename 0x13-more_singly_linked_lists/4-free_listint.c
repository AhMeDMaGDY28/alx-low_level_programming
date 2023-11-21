#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees each node in a linked list, starting from
 * the head.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head->next)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}

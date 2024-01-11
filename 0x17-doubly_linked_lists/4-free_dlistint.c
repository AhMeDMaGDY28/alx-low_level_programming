#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function frees each node in a doubly linked list,
 * starting from the head.
 *
 * Return: No return value.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

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

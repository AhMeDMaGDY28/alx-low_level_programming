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
	listint_t *tmp, *fir;

	fir = *head;
	if (head)
	{
		while (fir->next)
		{
			tmp = fir->next;
			free(fir);
			fir = tmp;
		}
		free(fir);
	}
	*head = NULL;
}

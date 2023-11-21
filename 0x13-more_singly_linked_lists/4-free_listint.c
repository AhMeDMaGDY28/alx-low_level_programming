#include "lists.h"

void free_listint(listint_t *head)
{
	free(head);
	while (head)
	{
		if (head->next)
		{
			free(head->next);
		}
		head = head->next;
	}
}

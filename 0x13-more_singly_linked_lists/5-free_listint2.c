#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	free(*head);
	*head = NULL;
	while (tmp)
	{
		if (tmp->next)
		{
			free(tmp->next);
		}
		tmp = tmp->next;
	}
}

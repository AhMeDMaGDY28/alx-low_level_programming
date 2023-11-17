#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	unsigned int length = 0;
	list_t *temp;

	while (str[length])
	{
		length++;
	}
	new_tail = (list_t *)malloc(sizeof(list_t));

	if (!new_tail)
	{
		return (NULL);
	}

	if (!*head)
	{
		*head = new_tail;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_tail;
	}
	new_tail->str = strdup(str);
	new_tail->len = length;
	new_tail->next = NULL;
	return (new_tail);
}
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_first;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	new_first = (list_t *)malloc(sizeof(list_t));
	if (!new_first)
	{
		return (NULL);
	}
	new_first->str = strdup(str);
	new_first->len = length;
	new_first->next = *head;
	*head = new_first;
	return (*head);
}

#include "lists.h"
/**
 * free_list - Frees the memory occupied by a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function frees each node in the linked list,
 * including the strings stored in each node.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
	{
		while (head && head->next)
		{
			tmp = head;
			head = head->next;
			if (tmp->str)
			{
				free(tmp->str);
			}
			if (tmp)
			{
				free(tmp);
			}
		}
		if (head->str)
		{
			free(head->str);
		}

		if (head->next)
		{
			free(head->next);
		}
		free(head);
	}
}

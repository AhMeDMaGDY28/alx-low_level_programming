#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function detects if there's a loop in the linked list.
 * If a loop is found, it returns a pointer
 * to the start of the loop; otherwise,
 * it returns NULL.
 *
 * Return: A pointer to the start of the loop, or NULL if no loop is found.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}

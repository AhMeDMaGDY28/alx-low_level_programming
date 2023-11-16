#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	if (h)
	{
		x = 1;
		while (h->next)
		{
			x++;
			h = h->next;
		}
	}

	return (x);
}

#include "lists.h"
/**
 * dlistint_len - Count the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function counts and returns the number
 *  of elements in a doubly linked list.
 *
 * Return: The number of elements in the doubly linked list.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_count = 0;

	if (!h)
		return (0);
	while (h)
	{
		number_count++;
		h = h->next;
	}
	return (number_count);
}

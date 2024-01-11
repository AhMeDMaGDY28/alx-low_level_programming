#include "lists.h"
/**
 * print_dlistint - Print all the elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function prints the integer elements of a doubly linked list.
 * Each element is printed on a new line.
 *
 * Return: The number of nodes in the doubly linked list.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}

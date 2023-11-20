#include "lists.h"

/**
 * print_listint - this function that prints all the elements
 * of a listint_t list
 * @h: a pointer to the head of th nodes
 * Return: the numbber of nodes
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}

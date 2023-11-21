#include "lists.h"
/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Description: This function counts the number of nodes in a linked list.
 *
 * Return: The number of nodes in the list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}

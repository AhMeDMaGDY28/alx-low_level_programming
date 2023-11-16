#include "lists.h"
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}

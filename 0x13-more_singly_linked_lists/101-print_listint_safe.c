#include "lists.h"
/**
 * print_listint_safe - Prints a linked list safely to avoid infinite loop.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function prints the linked list nodes safely to avoid
 * an infinite loop in case of a cycle in the list.
 *
 * Return: The number of nodes in the linked list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
	exit(98);
}

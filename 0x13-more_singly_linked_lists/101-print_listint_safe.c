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
	size_t idx;
	size_t count = 0;
	const listint_t *nodeList[1000];

	while (head)
	{
		for (idx = 0; idx <= count; idx++)
			if (nodeList[idx] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		nodeList[count] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
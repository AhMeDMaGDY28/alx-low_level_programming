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

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *what_to_point_to;

	if (!(*head))
		return (NULL);

	what_to_point_to = NULL;
	next_node = (*head)->next;
	(*head)->next = what_to_point_to;
	what_to_point_to = *head;

	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = what_to_point_to;
		what_to_point_to = *head;
	}
	return (*head);
}

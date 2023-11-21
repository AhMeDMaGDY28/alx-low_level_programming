#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 *
 * Description: This function reverses the linked list in place.
 *
 * Return: A pointer to the new head of the reversed list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
listint_t *reverse_listint(listint_t **head)
{
	if (!head || !*head)
		return (NULL);

	*head = reverse_listint_recursive(*head, NULL);
	return (*head);
}
/**
 * reverse_listint_recursive - Recursively reverses a linked list.
 * @current: A pointer to the current node in the linked list.
 * @prev: A pointer to the previous node in the linked list.
 *
 * Description: This function recursively reverses the linked list in place.
 *
 * Return: A pointer to the new head of the reversed list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
listint_t *reverse_listint_recursive(listint_t *current, listint_t *prev)
{
	listint_t *next;

	if (!current)
		return (prev);

	next = current->next;
	current->next = prev;

	return (reverse_listint_recursive(next, current));
}

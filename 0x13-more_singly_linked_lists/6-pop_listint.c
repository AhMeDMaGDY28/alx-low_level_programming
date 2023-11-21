#include "lists.h"
/**
 * pop_listint - Removes the head node of a linked list and returns its data.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function removes the head node of a linked list, returns
 * its data, and updates the head to point to the new head.
 *
 * Return: The data of the removed head node (0 if the list is empty).
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *tmp;

	tmp = *head;
	if (!head)
	{
		return (x);
	}
	if (*head)
	{
		x = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (x);
}

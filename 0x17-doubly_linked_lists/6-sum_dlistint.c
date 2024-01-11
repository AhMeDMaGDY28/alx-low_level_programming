#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all the integers
 * in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function traverses the doubly linked list and returns the sum of all
 * the integer values stored in the nodes. If the list is empty, it returns 0.
 *
 * Return: The sum of all integers in the doubly linked list, or 0 if empty.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *mover = head;

	if (!mover)
		return (sum);
	while (mover)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
}

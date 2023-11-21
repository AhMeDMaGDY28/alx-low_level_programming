#include "lists.h"
/**
 * sum_listint - Computes the sum of all the integers in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function calculates the sum of all the integers stored in
 * the linked list.
 *
 * Return: The sum of all integers in the linked list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

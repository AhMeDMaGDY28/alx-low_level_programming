#include "lists.h"
/**
 * free_listint_safe - Frees a linked list safely to avoid infinite loop.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function frees the linked list nodes safely to avoid
 * an infinite loop in case of a cycle in the list.
 *
 * Return: The number of nodes freed in the linked list.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		}
		else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}

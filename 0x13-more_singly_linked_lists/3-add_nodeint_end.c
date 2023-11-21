#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the head of the list.
 * @x: The integer value to be stored in the new node.
 * Description: This function creates a new node with the specified integer
 * value and adds it to the end of the linked list.
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
listint_t *add_nodeint_end(listint_t **head, const int x)
{
	listint_t *new_last_node, *tmp;

	new_last_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_last_node)
	{
		return (NULL);
	}

	if (!*head)
	{
		*head = new_last_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_last_node;
	}
	new_last_node->n = x;
	new_last_node->next = NULL;

	return (new_last_node);
}

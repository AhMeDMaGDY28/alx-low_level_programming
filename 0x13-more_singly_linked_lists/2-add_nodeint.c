#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to the head of the list.
 * @x: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the specified integer
 * value and adds it to the beginning of the linked list.
 *
 * Return: A pointer to the newly created node, or NULL if memory
 * allocation fails.
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
listint_t *add_nodeint(listint_t **head, const int x)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = x;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to linked list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *node_pointer;

	if (!(*head))
		return (NULL);

	node_pointer = NULL;
	next_node = (*head)->next;
	(*head)->next = node_pointer;
	node_pointer = *head;

	while (next_node != NULL)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = node_pointer;
		node_pointer = *head;
	}

	return (*head);
}

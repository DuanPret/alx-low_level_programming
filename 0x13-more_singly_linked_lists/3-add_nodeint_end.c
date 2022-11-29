#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: top of node
 * @n: element of the node to be added
 * Return: Address of the new element, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head;
	listint_t *lastnode;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = new_head;
	}

	return (new_head);
}

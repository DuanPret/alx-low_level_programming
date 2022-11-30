#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list
 * @head: Double pointer to the head node
 * Return: Head node data n, 0 on failure
 */
int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int n;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	n = node_to_delete->n;
	free(node_to_delete);

	return (n);
}

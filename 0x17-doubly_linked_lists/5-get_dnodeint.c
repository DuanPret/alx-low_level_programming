#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: node at index @index,
 * if node doesn't exist return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current_node)
	{
		if (i == index)
			return (current_node);

		current_node = current_node->next;
		i++;
	}

	return (NULL);
}

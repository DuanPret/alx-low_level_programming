#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of the list
 * @head: Double pointer to top of list
 * @index: Index of the node that will be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *tmp;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);

		return (1);
	}

	while (current->next && ((i + 1) != index))
	{
		current = current->next;
		i++;
	}
	if ((i + 1) == index && current->next)
	{
		tmp = current->next;
		current->next = tmp->next;
		return (1);
	}

	return (-1);
}

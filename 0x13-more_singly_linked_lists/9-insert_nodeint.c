#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at given position
 * @head: Double pointer to the head of the linked list
 * @idx: Index of the list where the new node will be added
 * @n: element n of the node to be added
 * Return: adress of the new element on succes,
 * NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head, *new_ptr;

	if (idx == 0)
	{
		new_ptr = malloc(sizeof(listint_t));

		if (new_ptr == NULL)
			return (NULL);
		new_ptr->n = n;
		new_ptr->next = *head;
		*head = new_ptr;
		return (new_ptr);
	}

	while (current && ((i + 1) != idx))
	{
		current = current->next;
		i++;
	}

	if ((i + 1) == idx)
	{
		new_ptr = malloc(sizeof(listint_t));

		if (!new_ptr)
			return (NULL);
		new_ptr->n = n;
		new_ptr->next = current->next;
		current->next = new_ptr;
		return (new_ptr);
	}
	return (NULL);
}

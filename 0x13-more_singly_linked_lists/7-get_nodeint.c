#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in listint_t list
 * @head: Pointer to first element of the listint_t linked list
 * @index: Index of the node to return
 * Return: The nth node of listint_t linked list,
 * NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp && (count < index))
	{
		tmp = tmp->next;
		count++;
	}
	if (count < index)
		return (NULL);

	return (tmp);
}

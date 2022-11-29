#include "lists.h"

/**
 * free_listint - frees a list
 * @head: Pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

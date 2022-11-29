#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Double pointer to the first node of list_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of dlistint_t list
 * @head: pointer to head of list
 * Return: sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}

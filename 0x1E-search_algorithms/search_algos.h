#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: integer
 * @index: index of the node in the list
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 * for project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with an express lane
 *
 * @n: integer
 * @index: index of node in the list
 * @next: pointer to the next node
 * @express: pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_t *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif

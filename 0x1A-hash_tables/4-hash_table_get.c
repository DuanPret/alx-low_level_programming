#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table
 * @key: The key to look for
 *
 * Return: The value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);

	if (ht->array[idx] == NULL || ht->array[idx] == 0)
		return (NULL);

	if (strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);	
}

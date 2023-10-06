#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
	{
		hash_node_t *tmp = node->next;

		free(node->key);
		free(node);
		node = tmp;
		free(node->value);
	}
	}

	free(ht->array);
	free(ht);
}

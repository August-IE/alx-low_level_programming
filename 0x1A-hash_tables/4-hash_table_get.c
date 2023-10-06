#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieve a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key we are looking for.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
	return (NULL);

	node = ht->array[index];
	while (node != NULL && strcmp(node->key, key) != 0)
	node = node->next;

	return (node != NULL ? node->value : NULL);
}

#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: A hash table
 * @key: The key to retrieve it's value
 *
 * Return: Returns the value of the key or NULL if unsuccessful
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && (strcmp(node->key, key) != 0))
		node = node->next;

	if (!node)
		return (NULL);
	return (node->value);
}

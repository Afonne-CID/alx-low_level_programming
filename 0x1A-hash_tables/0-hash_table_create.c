#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array of the hash table
 *
 * Return: Pointer to the newly created hash table
 *              or NULL if unsuccessful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (!ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

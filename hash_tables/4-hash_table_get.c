#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key
 * is not found or if any parameter is invalid.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *tmp;

	/* Validate parameters first */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}

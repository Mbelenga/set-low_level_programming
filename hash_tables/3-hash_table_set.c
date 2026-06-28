#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key (cannot be an empty string)
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;
	char *dup_key, *dup_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);

			free(current->value);
			current->value = dup_value;
			return (1);
		}
		current = current->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	dup_key = strdup(key);
	if (dup_key == NULL)
	{
		free(new_node);
		return (0);
	}

	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		free(dup_key);
		free(new_node);
		return (0);
	}

	new_node->key = dup_key;
	new_node->value = dup_value;

	/* Insert at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: is the hash table to be updated
 * @key: key cannot be empty
 * @value: value to be associated to the key
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = 0, *indx_node = 0;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	indx_node = (ht->array)[index];

	if (indx_node && !strcmp(indx_node->key, key))
	{
		free(indx_node->value);
		indx_node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	(ht->array)[index] = new_node;
	new_node->next = indx_node;
	return (1);
}

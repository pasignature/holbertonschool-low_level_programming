#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function to retrieve value at key
 * @ht: is the hash table
 * @key: is the key being searched
 * Return: associated value if found or NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int arr_index;
	hash_node_t *ht_node = NULL;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);

	arr_index = key_index((const unsigned char *)key, ht->size);
	ht_node = (ht->array)[arr_index];

	if (!ht_node)
		return (NULL);

	while (ht_node)
	{
		if (!strcmp(ht_node->key, key))
			return (ht_node->value);
		ht_node = ht_node->next;
	}
	return (NULL);
}

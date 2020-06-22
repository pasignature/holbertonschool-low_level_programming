#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Hash function to delete a table
 * @ht: table to be deleted
 * Return: always successful
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int counter;
	hash_node_t *ht_node = 0;

	if (!ht)
		return;

	for (counter = 0; counter < ht->size; counter++)
	{
		ht_node = (ht->array)[counter];

		if (ht_node)
		{
			while (ht_node)
			{
				hash_node_t *next = ht_node->next;

				free(ht_node->key);
				free(ht_node->value);
				free(ht_node);
				ht_node = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}

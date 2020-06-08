#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function to print a hash table in C
 * @ht: hash table to be printed
 * Return: printed elements of hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int counter = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *ht_node = (ht->array)[i];
		if (ht_node)
		{
			while (ht_node)
			{
				if (counter != 0)
					printf(", ");
				printf("'%s': '%s'", ht_node->key, ht_node->value);
				ht_node = ht_node->next;
				counter++;
			}
		}
	}
	printf("}\n");
}

#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *h_table = 0;
  hash_node_t **array = 0;
  unsigned long int count;

  h_table = malloc(sizeof(hash_table_t));
  if (!h_table)
    return (NULL);

  h_table->size = size;
  array = malloc(sizeof(hash_node_t *) * size);
  if (!array)
    return (NULL);

  for (count = 0; count < size; count++)
    array[count] = 0;

  h_table->array = array;
  return (h_table);
}

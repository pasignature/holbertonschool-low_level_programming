#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a `list_t' list
 * @h: pointer to head node of linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *node;
	size_t count = 0;

	if (h == NULL)
		return (count);

	/* initialize loop, copy address of h to node */
	for (node = (list_t *)h; node != NULL; node = node->next)
	{
		if (node->str)
			printf("[%u] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		count++;
	}
	return (count);
}

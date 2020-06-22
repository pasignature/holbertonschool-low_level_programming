#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - get length of string
 * @s: string
 *
 * Return: length of string excluding terminating null byte
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: pointer to pointer to the first node in a linked list
 * @str: string to be assigned to node
 *
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;
	return (*heads);
}

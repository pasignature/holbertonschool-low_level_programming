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
	return (ii);
}

/**
 * add_node_end - adds a new node at the end of a `list_t` linked list
 * @head: pointer to first node in linked list
 * @str: string to be assigned to new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (i = *head; i->next != NULL; i = i->next)
			;
		i->next = new;
	}
	return (news);
}

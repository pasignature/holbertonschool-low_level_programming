#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @s: string
 *
 * Return: length of string excluding null byte
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: pointer to buffer to copy string into
 * @src: pointer from which to copy from
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (dest[i] = src[i]) != '\0'; i++)
		;
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	new_dog->age = age;

	/* malloc room for new dog name and owner */
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* initialize newly allocated memory */
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}

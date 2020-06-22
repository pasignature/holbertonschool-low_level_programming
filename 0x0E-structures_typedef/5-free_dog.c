#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dynamically allocated struct dog
 * @d: pointer to struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

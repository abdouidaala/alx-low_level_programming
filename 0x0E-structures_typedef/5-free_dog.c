#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(NULL);
	free(d->name);
	free(d->owner);
	free(d);
}

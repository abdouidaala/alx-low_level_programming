#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d->name == NULL)
		free(d);
	if(d->owner == NULL)
	{
		free(d->name);
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		strcpy(d->name, name);

		d->age = age;

		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->owner, owner);
	}
}

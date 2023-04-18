#include "dog.h"
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;

	d->name = malloc(strlen(name));
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner));
	strcpy(d->owner, owner);
}

#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}

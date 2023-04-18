#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

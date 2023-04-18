#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

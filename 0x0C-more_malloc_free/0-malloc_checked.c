#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *a = malloc(sizeof(unsigned int) * b);

	return (a);
}

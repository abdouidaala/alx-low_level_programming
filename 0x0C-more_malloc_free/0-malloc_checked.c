#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);
	
	if (a == NULL)
		return (98);

	return (a);
}

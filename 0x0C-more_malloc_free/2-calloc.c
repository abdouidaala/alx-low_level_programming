#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	
	free(ptr);
	return (ptr);
}

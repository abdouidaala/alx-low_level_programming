#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = malloc(nmemb * size);

	memset(ptr, 0, nmemb * size);

	if (ptr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	return (ptr);
}

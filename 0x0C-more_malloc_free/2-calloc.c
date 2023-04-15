#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = malloc(nmemb * size);
	int i;

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	if (ptr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	return (ptr);
}

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

	return (ptr);
}

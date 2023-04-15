#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (nmemb > 0 && size > 0)
		{
			memset(ptr, 0, nmemb * size);
			return (ptr);
		}
		else
		{
			return (NULL);
		}
	}
}

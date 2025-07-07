#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a = NULL;
	char *newPtr = NULL;
	unsigned int min_size = 0, i = 0;

	if (old_size == new_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);

	if (!newPtr)
		return (NULL);

	if (ptr)
	{
		min_size = old_size < new_size ? old_size : new_size;
		a = ptr;
		for (; i < min_size; i++)
			newPtr[i] = *a++;
		free(ptr);
	}

	return (newPtr);
}

#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block,
 *         or NULL if allocation fails or ptr is NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *oPtr = ptr;
	char *nPtr = NULL;

	nPtr = malloc(sizeof(char) * (new_size + old_size));

	if (!nPtr)
		return (NULL);

	if (!oPtr)
	{
		i = 0;
		for (; i < new_size + old_size; i++)
			nPtr[i] = 0;
	}
	else
	{
		i = 0;
		for (; i < old_size; i++)
		{
			nPtr[i] = *oPtr;
			*oPtr++ = '\0';
		}
		free(ptr);
		for (; i < new_size; i++)
			nPtr[i] = 0;
	}

	return (nPtr);
}

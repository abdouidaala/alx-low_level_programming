#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * Write a function that reallocates a memory block using malloc and free

Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size == zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don’t forget to free ptr when it makes sense
 */
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr = NULL;
	unsigned int min_size = 0;

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
		/* Copy the minimum of old_size and new_size bytes */
		min_size = old_size < new_size ? old_size : new_size;
		memcpy(newPtr, ptr, min_size);
		free(ptr);
	}

	return newPtr;
	/*
	unsigned int i = 0;
	char *oPtr = ptr;
	char *nPtr = NULL;

	if (!new_size && ptr)
	{
		free(oPtr);
		return (NULL);
	}
	if (old_size == new_size)
		new_size = 0;

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

	return (nPtr);*/
}

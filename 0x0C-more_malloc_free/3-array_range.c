#include "main.h"

/**
 * array_range - Creates an array of integers min to max (included).
 *
 * @min: The minimum integer value to include in the array.
 * @max: The maximum integer value to include in the array.
 *
 * Return: Pointer to the newly created array,
 *         NULL if min > max or memory allocation fails.
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *arr = NULL;
	int *pArr = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (!arr)
		return (NULL);

	pArr = arr;

	for (; i < size; i++)
		*(pArr + i) = min++;

	return (arr);
}

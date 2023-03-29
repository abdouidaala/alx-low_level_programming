#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copy strings from source arr to destination arr
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: Pointer to destination array
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}

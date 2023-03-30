#include <string.h>

/**
 * _strncat - Concatenates two strings using @ bytes
 *
 * @dest: Destination String; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}

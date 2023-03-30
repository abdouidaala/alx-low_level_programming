#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *string_toupper - changes all lowercase letters of a string to upper
 *
 * @str: String to return
 *
 * Return: String
 */
char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}

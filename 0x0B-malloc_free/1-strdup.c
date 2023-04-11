#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a copy of string
 *
 * @str:string parameter
 *
 * Return:NULL(fail)
 */
char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);

	a = strdup(str);
	return (a);
}

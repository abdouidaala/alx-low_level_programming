#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);

	a = strdup(str);
	return (a);
}

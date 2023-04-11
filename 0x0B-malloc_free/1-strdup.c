#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *a;

	a = strdup(str);
	return (a);
	
	if (str == NULL)
		return (NULL);
}

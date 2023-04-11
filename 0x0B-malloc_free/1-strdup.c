#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *a;

	a = strdup(str);
	
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		return (a);
	}
}

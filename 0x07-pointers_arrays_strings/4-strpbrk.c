#include "main.h"
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
	char *str;

	str = strpbrk(s, accept);

	return (str);
}

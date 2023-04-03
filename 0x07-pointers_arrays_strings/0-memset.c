#include "main.h"
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(b) * n);

	return (s);
}

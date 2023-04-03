#include "main.h"
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	int p;

	p = strspn(s, accept);

	return (p);
}

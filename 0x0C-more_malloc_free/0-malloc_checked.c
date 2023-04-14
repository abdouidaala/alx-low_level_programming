#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	char *a = malloc(sizeof(int) * b);

	return (a);
}

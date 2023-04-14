#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *p = malloc(strlen(s1) + n);

	for (i = 0; i < strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';
	return (p);
}

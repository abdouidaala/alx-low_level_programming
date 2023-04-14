#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count = 0;
	unsigned int i, j;
	char *ptr;

	while (s1[count])
		count++;

	ptr = (char *) malloc(sizeof(char) * (count + n + 1));

	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

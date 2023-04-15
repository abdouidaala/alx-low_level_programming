#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count1 = 0, count2 = 0;
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1])
		count1++;

	while (s2[count2])
		count2++;

	if (n >= count2)
		n = count2;

	ptr = (char *) malloc(sizeof(char) * (count1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

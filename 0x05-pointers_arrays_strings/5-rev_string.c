#include "main.h"
#include <string.h>

void rev_string(char* s) {
	int i, len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		char c;
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
	putchar('\n');
}

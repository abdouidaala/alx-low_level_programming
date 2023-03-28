#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		char c;

		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}

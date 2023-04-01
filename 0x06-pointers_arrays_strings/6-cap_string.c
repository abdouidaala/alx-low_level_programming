#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char v[];

	v = {' ', '\n', '\t', '.', ',', ';', '?', '!', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i - 1] == v[j]) && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
			}
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] -= 32;
			}
		}
	}
	return (s);
}

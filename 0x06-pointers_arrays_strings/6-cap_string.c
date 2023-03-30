#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes everey word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int i, len, j;
	char str2[13] = {',', '.', ';', '!', '?',
			'"', '(', ')', '{', '}',
			' ', '\n', '\t'};

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		for (str[i - 1] == str2[j])
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}

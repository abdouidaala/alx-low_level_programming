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
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'
			|| str[i - 1] == '.' || str[i - 1] == ',' || str[i - 1] == ';'
			|| str[i - 1] == '"' || str[i - 1] == '!' || str[i - 1] == '?'
			|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}

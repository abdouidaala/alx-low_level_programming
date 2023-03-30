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
	char str2[10] = ",;.!?(){}\"";

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i - 1])
		{
			str[i] = toupper(str[i]);
		}
	}
		for (j = 0; j < strlen(str2); j++)
		{
			if (str[i - 1] == str2[j])
			{
				str[i] = toupper(str[i]);
			}
		}

	return (str);
}

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
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i - 1])
		{
			str[i] = toupper(str[i]);
		}
		switch (str[i - 1])
		{
			case 33:
				str[i] = toupper(str[i]);
			case 34:
				str[i] = toupper(str[i]);
			case 40:
				str[i] = toupper(str[i]);
			case 41:
				str[i] = toupper(str[i]);
			case 44:
				str[i] = toupper(str[i]);
			case 46:
				str[i] = toupper(str[i]);
			case 59:
				str[i] = toupper(str[i]);
			case 63:
				str[i] = toupper(str[i]);
			case 123:
				str[i] = toupper(str[i]);
			case 125:
				str[i] = toupper(str[i]);
			default:
				break;
		}
	}

	return (str);
}

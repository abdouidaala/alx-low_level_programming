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
	int i, j;
	char va[13] = {" ", "\n", "\t", ".",
			",", ";", "?", "!",
			"\"", "{", "}",
			"(", ")"};

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == va[j])
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}

	return (str);
}

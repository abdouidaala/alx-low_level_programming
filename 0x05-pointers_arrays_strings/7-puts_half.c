#include "main.h"
#include <string.h>

/**
 * puts_half - print half a strong
 *
 * @str: input string
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len - 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

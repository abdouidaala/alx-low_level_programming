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
	int i, len, n;

	len = strlen(str);
	n = len / 2;
	for (i = n; i < len; i++) 
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

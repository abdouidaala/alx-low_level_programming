#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse string
 *
 * @s: String to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}

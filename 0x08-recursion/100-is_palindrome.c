#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if a string is a palindrome.
 *
 * @s: The given string.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	int i = 0;

	for (; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}

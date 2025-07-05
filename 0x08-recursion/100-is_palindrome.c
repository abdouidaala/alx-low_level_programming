#include "main.h"
#include <string.h>

/**
 * _helper - Recursively checks if a substring is a palindrome.
 *
 * @s: The input string to check.
 * @i: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring s[i..end] is a palindrome, 0 otherwise.
 */
int _helper(char *s, int i, int end)
{
	if (i >= end)
		return 1;

	if (s[i] != s[end])
		return 0;

	return (_helper(s, i + 1, end - 1));
}

/**
 * is_palindrome - check if a string is a palindrome.
 *
 * @s: The given string.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (!strlen(s))
		return (0);

	return (_helper(s, 0, strlen(s) - 1));
}

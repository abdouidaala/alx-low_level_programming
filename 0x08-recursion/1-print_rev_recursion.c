#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: a pointer to the string
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

#include "main.h"
#include <stdbool.h>

/**
 * print_number - print a number using only the function _putchar().
 *
 * @n: The number to print
 *
 * Return: void.
 */

void print_number(int n)
{
	bool s = n < 10 && n ? 1 : 0;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n && n < 10)
	{
		_putchar((n % 10) + '0');
		return;
	}
	if (!n && !s)
	{
		_putchar('0');
		return;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}

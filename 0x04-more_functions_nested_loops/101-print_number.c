#include "main.h"

/**
 * print_number - print a number using only the function _putchar().
 *
 * @n: The number to print
 *
 * Return: void.
 */
void print_number(int n)
{

	if (!n)
		return;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	print_number(n / 10);
	_putchar((n % 10) + '0');
}

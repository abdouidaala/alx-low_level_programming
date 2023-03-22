#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @r: Number
 *
 * Return: 1 (is greater that zero) OR 0 (is zero)
 * OR -1 (is less that zero)
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

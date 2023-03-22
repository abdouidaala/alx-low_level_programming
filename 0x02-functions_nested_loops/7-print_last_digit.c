#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @r: A number
 *
 * Return: Last digit of n
 */
int print_last_digit(int r)
{
	int d;

	if (r < 0)
		d = (r * (-1)) % 10;
	else
		d = r % 10;
		_putchar(d + '0');
		return (d);
}

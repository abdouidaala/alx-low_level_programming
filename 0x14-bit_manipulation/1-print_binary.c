#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, result;

	if (n == 0)
		_putchar('0');
	while (mask <= n)
		mask <<= 1;

	result = mask >> 1;
	while (result)
	{
		if (result & n)
			_putchar('1');
		else
			_putchar('0');

		result >>= 1;
	}
}

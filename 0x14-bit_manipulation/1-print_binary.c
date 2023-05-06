#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, result;

	while (mask >= n)
		mask <<= 1;

	result = mask;
	while (result)
	{
		if (result & n)
			_putchar('1');
		else
			_putchar('0');

		result >>= 1;
	}
}

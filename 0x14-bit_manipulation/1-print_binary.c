#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found = 0;

	if (!n)
		_putchar('0');
	while (m)
	{
		if (m & n)
		{
			_putchar('1');
			found = 1;
		}
		else if (found)
			_putchar('0');

		m >>= 1;
	}
}

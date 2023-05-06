#include "main.h"
#include <stdio.h>

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
			printf("%c", '1');
		else
			printf("%c", '0');

		result >>= 1;
	}
}

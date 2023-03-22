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
	if (r < 0)
	{
		return ((r % 10) * (-1));
	}
	else
	{
		return (r % 10);
	}
}

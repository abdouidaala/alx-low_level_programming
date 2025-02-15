#include "main.h"

/**
 * @brief print_sign - Print the sign of a number
 *
 * @param n Number
 *
 * @return 1 (n > 0) OR 0 (n == 0) OR -1 (n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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

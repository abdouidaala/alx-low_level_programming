#include "main.h"

/**
 * print_most_numbers - Prints 0-9 leaving out 2 and 4.
 *
 * Return: 0-9
 *
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		switch (i++)
		{
			case 50:
				continue;
			case 52:
				continue;
			default:
				_putchar(i);
		}
	}
	_putchar('\n');
}

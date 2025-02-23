#include "main.h"

/**
 * @brief print_most_numbers - Print 0-9 leaving out 2 and 4.
 *
 * @return void
 */
void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
			_putchar(n);
		n++;
	}

	_putchar('\n');
}

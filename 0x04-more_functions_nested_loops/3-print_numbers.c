#include "main.h"

/**
 * @brief print_numbers - Prints 0 to 9
 *
 * @return The numbers 0 - 9
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
		_putchar(n++);

	_putchar('\n');
}

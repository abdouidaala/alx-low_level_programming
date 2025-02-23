#include "main.h"

/**
 * @brief print_numbers - Print 0 to 9
 *
 * @return void
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
		_putchar(n++);

	_putchar('\n');
}

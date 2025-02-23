#include "main.h"

/**
 * @brief more_numbers - Print 10x the numbers 0-14
 *
 * @return void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');

			_putchar(n % 10 + '0');
		}

		_putchar('\n');
	}
}

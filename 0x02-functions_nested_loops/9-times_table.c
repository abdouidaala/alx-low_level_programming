#include "main.h"

/**
 * @brief times_table - Prints the nine times table starting from 0
 *
 * @return void
 */
void times_table(void)
{
	short i;
	short j;
	short result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			/* Get the result of multiplication */
			result = i * j;

			/* Print the tens digits if any */
			if (result >= 10)
				_putchar((result / 10) + '0');
			/* Avoid printing space for the first number in the row */
			else if (j != 0)
				_putchar(' ');

			/* Print units digits */
			_putchar((result % 10) + '0');

			/* Print comma and space, except for the last number in the row */
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		/* Move to the next line after each row */
		_putchar('\n');
	}
}

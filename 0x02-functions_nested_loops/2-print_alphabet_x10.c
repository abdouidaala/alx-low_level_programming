#include "main.h"

/**
 * @brief print_alphabet_x10 - Prints the alphabet 10 times
 *
 * @note You can only use _putchar twice in your code
 *
 * @return void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}

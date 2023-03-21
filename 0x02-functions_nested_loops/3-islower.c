#include "main.h"

int main(void)
{
	int r;
	char ch;

	r = _islower(ch);

	if (r != 0)
	{
		_putchar('1');
	} else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}

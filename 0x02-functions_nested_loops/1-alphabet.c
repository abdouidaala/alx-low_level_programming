#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(print_alphabet(ch));
	}
	_putchar('\n');
	return (0);
}

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
		print_alphabet(_putchar(ch));
	}
	_putchar('\n');
	return (0);
}

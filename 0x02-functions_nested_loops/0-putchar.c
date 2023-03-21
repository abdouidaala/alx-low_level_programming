#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void);
{
	char *ch = "_putchar";

	while (*ch)
	{
		putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}

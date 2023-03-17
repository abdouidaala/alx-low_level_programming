#include <stdio.h>

/**
  * main - Entry point
  * print all possible combination of single digit number
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchart(i);
		putchart(44);
		putchart(32);
	}
	putchart('\n');
	return (0);
}

#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @r: Number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */
int _islower(int r)
{
	if (r >= 97 && r < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

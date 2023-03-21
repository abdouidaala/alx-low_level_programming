#include "main.h"

/**
 * _isalpha - Checks for Alphabetic Characters
 *
 * @r: Alphabetic character
 *
 * Return: 1 (Success) OR 0 (Failure)
 */
int _isalpha(int r)
{
	if (r >= 32 && r <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

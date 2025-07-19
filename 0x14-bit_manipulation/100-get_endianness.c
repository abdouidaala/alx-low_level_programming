#include "main.h"

/**
 * get_endianness - a function to detect endianness
 *
 * Return: 1 in case of little endian, otherwise 0.
 */
int get_endianness(void)
{
	int n = 0x1234;
	char *pn = (char *)&n;

	if (*pn != '4')
		return (0);
	return (1);
}

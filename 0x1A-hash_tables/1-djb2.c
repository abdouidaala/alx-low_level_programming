#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int c;

	for (c = *str; *str; str++)
		hash += c;

	return (hash);
}

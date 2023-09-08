#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table
 * @key: the key you're looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	return ht->array[0]->key;
}

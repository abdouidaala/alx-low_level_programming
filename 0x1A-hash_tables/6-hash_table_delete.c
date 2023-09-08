#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, length = ht->size;
	hash_node_t *ptr;

	while (i < length)
	{
		ptr = ht->array[i]->next;
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
		ht->array[i] = ptr;
	}
	ht = NULL;
}

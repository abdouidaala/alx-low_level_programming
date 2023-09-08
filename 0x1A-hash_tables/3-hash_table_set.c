#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_key = NULL;
	unsigned long int index;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!key || !new)
		return (0);
	copy_key = strdup(key);
	index = key_index((const unsigned char *)copy_key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new = ht->array[index];

	free(copy_key);

	return (1);
}

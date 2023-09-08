#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table
 * @key: the key, it can not be an empty string
 * @value: the value of the key, it must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_key = NULL;
	unsigned long int index;
	hash_node_t *new, *temp;

	copy_key = strdup(key);
	index = key_index((const unsigned char *)copy_key, ht->size);
	if (!copy_key)
		return (0);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, strdup(key)) == 0)
			printf("NICE\n");
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	free(copy_key);

	return (1);
}

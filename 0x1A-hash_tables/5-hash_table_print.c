#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, ptr;

	if (!ht)
		return;
	fprintf(stdout, "{");
	ptr = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (ptr > 0)
				fprintf(stdout, ", ");
			fprintf(stdout, "'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			ptr++;
		}
		i++;
	}
	fprintf(stdout, "}\n");
}

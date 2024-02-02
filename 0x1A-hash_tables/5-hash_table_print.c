#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *j;
	char k = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		j = ht->array[i];
		while (j != NULL)
		{
			if (k == 1)
				printf(", ");
			printf("'%s': '%s'", j->key, j->value);
			k = 1;
			j = j->next;
		}
	}
	printf("}\n");
}

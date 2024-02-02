#include "hash_tables.h"

/**
 * hash_table_get - A function that retrives a value associated with key
 * @ht: is hash table
 * @key: input key
 * Return: key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *j;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	j = ht->array[i];
	while (j != NULL)
	{
		if (strcmp(j->key, key) == 0)
			return (j->value);
		j = j->next;
	}
	return (NULL);
}

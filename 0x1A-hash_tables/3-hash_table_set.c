#include "hash_tables.h"

/**
 * make_hash_node - A function that creates a new hash node
 * @key: input key of node
 * @value: input value of the node
 * Return: node
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *o;
	o = malloc(sizeof(hash_node_t));
	if (o == NULL)
		return (NULL);
	o->key = strdup(key);
	if (o->key == NULL)
	{
		free(o);
		return (NULL);
	}
	o->value = strdup(value);
	if (o->value == NULL)
	{
		free(o->key);
		free(o);
		return (NULL);
	}
	o->next = NULL;
	return (o);
}

/**
 * hash_table_set - A function that adds an elements to the hash table
 * @ht: hash table to add or update the key/value
 * @key: input key
 * @value: input data associated with the key
 * Return: 1 if it succeeded, 0 otherwith
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *hash_node, *j;
	char *n;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	j = ht->array[i];
	while (j != NULL)
	{
		if (strcmp(j->key, key) == 0)
		{
			n = strdup(value);
			if (n == NULL)
				return (0);
			free(j->value);
			j->value = n;
			return (1);
		}
		j = j->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;
	return (1);
}

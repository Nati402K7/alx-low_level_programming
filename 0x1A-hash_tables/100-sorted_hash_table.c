#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table
 * @size: input size of hash table
 * Return: created new table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *n;
	unsigned long int i;

	n = malloc(sizeof(shash_table_t));
	if (n == NULL)
		return (NULL);
	n->size = size;
	n->shead = NULL;
	n->stail = NULL;
	n->array = malloc(sizeof(shash_node_t) * size);
	if (n->array == NULL)
	{
		free(n);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n->array[i] = NULL;
	}
	return (n);
}

/**
 * make_shash_node - A function that makes a node for the hash table.
 * @key: input key of hash table
 * @value: input value of hash table
 * Return: new node
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *n;

	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
		return (NULL);
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = n->snext = n->sprev = NULL;
	return (n);
}

/**
 * add_to_sorted_list - A function that add a node to the sorted list
 * @table: input hash table
 * @node: input node
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *n;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	n = table->shead;
	while (n != NULL)
	{
		if (strcmp(node->key, n->key) < 0)
		{
			node->snext = n;
			node->sprev = n->sprev;
			n->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		n = n->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - A function that sets a key to a value in the hash table
 * @ht: hash table
 * @key: input hash table key
 * @value: input hash table data value
 * Return: 1 otherwith 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *n;
	shash_node_t *s, *j;

	if (ht == NULL || ht->array == NULL ||
			ht->size == 0 || key == NULL ||
			strlen(key) == 0 || value == NULL)
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
	s = make_shash_node(key, value);
	if (s == NULL)
		return (0);
	s->next = ht->array[i];
	ht->array[i] = s;
	add_to_sorted_list(ht, s);
	return (1);
}

/**
 * shash_table_get - A function that getes hash table
 * @ht: hash table
 * @key: input key of hash table
 * Return: the data of hash table
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *g;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	g = ht->array[i];
	while (g != NULL)
	{
		if (strcmp(g->key, key) == 0)
			return (g->value);
		g = g->next;
	}
	return (NULL);
}

/**
 * shash_table_print - A function that prints a sorted hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *i;
	char j = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	i = ht->shead;
	while (i != NULL)
	{
		if (j == 1)
			printf(", ");
		printf("'%s': '%s'", i->key, i->value);
		j = 1;
		i = i->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints a hash table reverse
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *i;
	char j = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	i = ht->stail;
	while (i != NULL)
	{
		if (j == 1)
			printf(", ");
		printf("'%s': '%s'", i->key, i->value);
		j = 1;
		i = i->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deleted hash table
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *j;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			j = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = j;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

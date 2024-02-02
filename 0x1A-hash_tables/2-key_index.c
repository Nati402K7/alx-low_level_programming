#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: input key
 * @size: input hash table size
 * Return: the index at which the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

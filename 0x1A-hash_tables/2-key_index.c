#include "hash_tables.h"

/**
 * key_index - index
 * @key: int
 * @size: int
 * Return: 0
 */
 
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

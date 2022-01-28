#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: string
 * @value: int
 * @next: int
 */

typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: int
 * @array: int */

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif /* HASH_TABLES_H */

#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Give the index of a key in the hash table array
 * @key: key used to generate the hash value
 * @size: size of the array of the hash table
 *
 * Return: index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_number;

	hash_number = hash_djb2(key);
	index = hash_number % size;

	return (index);
}

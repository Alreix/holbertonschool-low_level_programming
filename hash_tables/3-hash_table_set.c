#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * create_node - Create a new hash node
 * @key: key to store in the node
 * @value: value associated with the key
 *
 * Return: pointer to the new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	 char *value_copy, *key_copy;
	 hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;
	new_node->key = key_copy;
	new_node->value = value_copy;

	return (new_node);
}

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: pointer to the hash table
 * @key: key to add or update (must not be empty)
 * @value: value associated with the key (will be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	hash_node_t *current_node, *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);

			free(current_node->value);
			current_node->value = value_copy;

			return (1);
		}
		current_node = current_node->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
		return (1);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Print all key/value pairs in a hash table
 * @ht: pointer to the hash table
 *
 * Description: Pairs are printed in the order of the array,
 * then within each index, in the order of the linked list.
 */
void hash_table_print(const hash_table_t *ht)
{
	int first = 1;
	unsigned long int i;
	hash_node_t *current_node;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		while (current_node != NULL)
		{
			if (first == 0)
			printf(", ");

			printf("'%s': '%s'", current_node->key, current_node->value);
			first = 0;

			current_node = current_node->next;
		}
	}
	printf("}\n");
}

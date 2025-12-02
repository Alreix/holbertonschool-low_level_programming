#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *last_node, *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	last_node = *h;

	while (i < idx - 1 && last_node != NULL)
	{
		last_node = last_node->next;
		i++;
	}

	if (last_node == NULL)
		return (NULL);

	if (last_node == NULL)
	return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

	new_node->n = n;
	new_node->prev = last_node;
	new_node->next = last_node->next;

	last_node->next->prev = new_node;
	last_node->next = new_node;

	return (new_node);
}

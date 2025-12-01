#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		len++;
		current_node = current_node->next;
	}

	return (len);
}

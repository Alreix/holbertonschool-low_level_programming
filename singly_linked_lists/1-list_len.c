#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Description: Iterates through a singly linked list and counts its nodes.
 *
 * Return: number of nodes in the list (as size_t)
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last_node, *delete_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	last_node = *head;

	if (index == 0)
	{
		delete_node = last_node;
		*head = last_node->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(delete_node);
		return (1);
	}
	while (last_node != NULL && i < index)
	{
		last_node = last_node->next;
		i++;
	}

	if (last_node == NULL)
		return (-1);

	delete_node = last_node;

	if (last_node->prev != NULL)
		last_node->prev->next = last_node->next;

	if (last_node->next != NULL)
		last_node->next->prev = last_node->prev;

	free(delete_node);
	return (1);
}

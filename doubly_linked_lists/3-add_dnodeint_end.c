#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = *head;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
		if (head == NULL || new_node == NULL)
		{
			free(new_node);
			return (0);
		}

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			new_node->prev = NULL;
		}

		else
		{
			while (last_node->next != NULL)
				last_node = last_node->next;

			new_node->prev = last_node;
			last_node->next = new_node;

		}
		return (new_node);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *nextnode;

	while (head != NULL)
	{
		nextnode = head->next;
		free(head->str);
		free(head);
		head = nextnode;
	}
}



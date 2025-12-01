#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Return: the lenght of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

		if (head == NULL || newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}

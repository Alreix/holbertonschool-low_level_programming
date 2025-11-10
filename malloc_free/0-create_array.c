#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * char *create_array - To creates an array of chars and initializes it.
 * @c: The character to initialized.
 * @size: the unsigned int for the size.
 *
 * Description: a function to create and initialize a array of chars.
 * Return: a pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c1 = &c;

	char *tab = malloc(sizeof(char) * size);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = *c1;
	
	free(tab);
	return (tab);
}

#include "main.h"
#include <stdlib.h>

/**
 * *new_dog - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: 
 * Return: 1 if c is lowercase, 0 otherwise.
 */

char *_strdup(char *str)
{
	int len = 0;
	char *tmp;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	len = len + 1;

	tmp = malloc(sizeof(char) * len);

	if (tmp == NULL)
		return (NULL);

	cpy = tmp;


		while (*str != '\0')
		{
			*tmp = *str;
			tmp++;
			str++;
		}

		*tmp = '\0';

		return (cpy);
}


dog_t *new_dog(char *name, float age, char *owner)
{
	int i;

	dog_t *info;

	info = malloc (sizeof(dog_t));

	if (info == NULL)
		return (NULL);

	*_strdup(name);

	*_strdup(owner);
		
}

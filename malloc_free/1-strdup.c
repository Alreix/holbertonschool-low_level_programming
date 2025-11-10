#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copy a string and return a pointer to a newly space in memory
 * @str: the string to copy.
 *
 * Description: copy a string and return a pointer to a newly space.
 * Return: a pointer to the duplicated string or NULL.
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

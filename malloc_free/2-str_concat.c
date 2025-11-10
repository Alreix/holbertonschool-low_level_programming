#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - To concatenate 2 strings.
 * @s1: The first string (src).
 * @s2: the second string to concatenate.
 *
 * Description: this function concatenate 2 strings.
 * Return: NULL if strings is empty or malloc echec and
 * pointer of new allocated memory (if success).
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp, *new_str;
	int len = 0, len1 = 0, lenT;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len1] != '\0')
		len1++;

	lenT = len + len1 + 1;

	new_str = malloc(sizeof(char) * lenT);

	if (new_str == NULL)
		return (NULL);

	tmp = new_str;

	while (*s1 != '\0')
	{
		*new_str = *s1;
		new_str++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*new_str = *s2;
		new_str++;
		s2++;
	}
	*new_str = '\0';
	return (tmp);
}

#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - To concatenate 2 string.
 * @s1: the str that contain n first char of s2.
 * @s2: the str that contain the 2d
 * @n: the number of char of s2 to copy.
 *
 * Description: copy n first char of s2 in s1 and
 * return the new adress in memory of this str.
 * Return: NULL if it fail, or the pointer of new str.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, nb, len = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		nb = len2;
	else
		nb = n;

	len = len1 + nb + 1;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (i = 0; i < nb; i++)
		new_str[len1 + i] = s2[i];

	new_str[len1 + nb] = '\0';
	return (new_str);
}

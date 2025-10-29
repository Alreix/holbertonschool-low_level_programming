#include "main.h"
/**
 * _strcmp - to compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Description: to compare two strings.
 * Return: a positive, negative or 0 (the difference between the strings).
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 > *s2 || *s2 > *s1)
		return (*s1 - *s2);

	else
		return (0);
}



#include "main.h"
/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: String to scan.
 * @c: Character to find.
 *
 * Return: Pointer to first occurrence in s, or 0 if not found.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else if (*s == '\0')
			return (s);

		s++;
	}
	return (0);
}

#include "main.h"
/**
 * _strstr - Locate a substring in a string.
 * @haystack: String to search in.
 * @needle: Substring to find.
 *
 * Return: Pointer to first occurrence, or 0 if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h == *n && *h != '\0' && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}

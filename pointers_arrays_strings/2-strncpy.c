#include "main.h"
/**
 * *_strncpy - to copies a string.
 * @dest: The destination of a string.
 * @src: the source string.
 * @n: the number of character to copies.
 *
 * Description: to copy a string into dest string.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{	*dest = '\0';
			dest++;
		}
	}

	return (tmp);
}

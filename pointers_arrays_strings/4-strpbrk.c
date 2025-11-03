#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: String to scan.
 * @accept: Bytes to match in s.
 *
 * Return: Pointer to first match in s, or 0 if none found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		i = 0;
		s++;

	}

	return (0);
}

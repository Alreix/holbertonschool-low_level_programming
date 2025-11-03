#include "main.h"

/**
 * _strspn - Get length of a prefix substring.
 * @s: String to scan.
 * @accept: Set of accepted bytes.
 *
 * Return: Number of bytes in s's initial segment from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				len += 1;
				break;
			}

			i++;
		}

		if (*s != accept[i])
			return (len);

		i = 0;
		s++;
	}

	return (len);
}

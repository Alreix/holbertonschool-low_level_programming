#include "main.h"
/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: Byte value to write.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	char *tmp = s;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (tmp);
}


#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Destination buffer.
 * @src: Source buffer.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (tmp);
}

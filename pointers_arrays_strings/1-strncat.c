#include "main.h"
/**
 * _strncat - Concatenates at most n bytes from src to dest.
 * @dest: The destination string buffer to append to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: concatenates two string limited by n.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;

	}

	return (tmp);
}

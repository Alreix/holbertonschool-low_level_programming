#include "main.h"
/**
 * *_strcpy - to copies the string pointed by src.
 * @dest: the value of return;
 * @src: the pointer of the string.
 *
 * Description: to copies the string pointed by src
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *end = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];

		dest++;
		src++;
	}

	*dest = '\0';

	return (end);
}

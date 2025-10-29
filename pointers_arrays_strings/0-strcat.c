#include "main.h"
/**
 * *_strcat - to concatenate 2 strings with pointers.
 * @src: the append string
 * @dest: the string of destination
 *
 * Description: 
 * Return: a pointer with the result of dest.
 */

char *_strcat(char *dest, char *src)
{
	char *tmp;
	int len = 0;

	while (src[len] != '\0')
	{
		tmp += src[len];
		len++; 
	}

	len = 0;

	while (dest[len] != '\0')
	{
		tmp += dest[len];
		len++;
	}

	dest = tmp;
	
	return (dest);
}




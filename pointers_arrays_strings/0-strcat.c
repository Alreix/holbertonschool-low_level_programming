#include "main.h"
/**
 * *_strcat - to concatenate 2 strings with pointers.
 * @src: the second string
 * @dest: the string of destination.
 *
 * Description: to concatenate 2 string <ith pointers.
 * Return: a pointer with the result of dest.
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (tmp);
}




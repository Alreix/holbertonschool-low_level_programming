#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - To allocate memory for an array with malloc.
 * @nmemb: The number of element of the array.
 * @size: the of bytes of each element.
 *
 * Description: to allocate memory for an array.
 * Return: NULL if size or nmemb is 0 or malloc fail
 * and a pointer to the new allocation of memory if success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;
	char element = size * nmemb;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);
		if (p == NULL)
			return (NULL);

	for (i = 0; i < element; i++)
		p[i] = 0;

	return (p);
}

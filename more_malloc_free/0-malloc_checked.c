#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function to allocate memory using malloc.
 * @b: the size of allocation required.
 *
 * Description: A function to allocate memory whith malloc
 * Return: 98 if it fail and don't have space, the pointer
 * of new memory allocation if success.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

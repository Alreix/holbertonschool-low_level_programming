#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - calls a function to print a name
 * @name: the name to print
 * @f: pointer to a function that prints a name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}

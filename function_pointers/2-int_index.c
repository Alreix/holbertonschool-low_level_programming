#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element for which cmp is not 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int resultat;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		resultat = cmp(array[i]);

		if (resultat != 0)
			return (i);
	}

		return (-1);
}

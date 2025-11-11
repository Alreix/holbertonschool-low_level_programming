#include "main.h"
#include <stdlib.h>

/**
 * *array_range - To create an array ordered from min to max
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Description: a new array in memory ordered from min to max
 * Return: NULL if min > max or malloc fail and pointer of
 * new adress in memory if success.
 */

int *array_range(int min, int max)
{
	int len;
	int i;
	int *array;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);
		if (array == NULL)
			return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min + i;

	return (array);
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - to print n elements of an array of integer.
 * @a: the value of number in array.
 * @n: the number of elements of the array to be printed.
 *
 * Description: to print n element of an array of integer.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);

		else
			printf("%d", a[i]);
	}
	printf("\n");
}


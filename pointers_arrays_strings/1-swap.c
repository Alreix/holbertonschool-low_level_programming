#include "main.h"
/**
 * swap_int - to swaps the values of two integers.
 * @a: the first int.
 * @b: the second int for the swap.
 *
 * Description: this swaps the values of two integers.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

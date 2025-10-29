#include "main.h"
/**
 * reverse_array - to reverse the content of an array of integers.
 * @a: the value of the array.
 * @n: the number of case of the array.
 *
 * Description: to reverse the content of an array of intgerers.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0;
	int rev = n - 1;

	while (start < rev)
	{
		tmp = a[start];
		a[start] = a[rev];
		a[rev] = tmp;

		rev--;
		start++;
	}
}

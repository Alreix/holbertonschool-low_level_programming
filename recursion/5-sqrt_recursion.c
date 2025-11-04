#include "main.h"

/**
 * function_plus - to make the operation for find the sqare root.
 * @n: The number to get the square root.
 * @x: The number for test.
 *
 * Return: The natural square root of n, or -1 if isn't.
 */

int function_plus(int x, int n)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (function_plus(x + 1, n));
}

/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: The number to compute the square root.
 *
 * Return: The natural square root, or -1 if it does not exist.
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (function_plus(0, n));
}

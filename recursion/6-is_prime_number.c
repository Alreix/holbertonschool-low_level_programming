#include "main.h"

/**
 * number_cal - To test divisions for prime numbers.
 * @n: The number to check.
 * @p: current divisor to test.
 *
 * Description: to test divisions for prime numbers.
 * Return: 1 if is prime, or 0 if is not.
 */

int number_cal(int p, int n)
{
	if (p * p > n)
		return (1);

	if (n % p == 0)
		return (0);

	return (number_cal(p + 1, n));
}

/**
 * is_prime_number - Return 1 if n is a prime number, else 0.
 * @n: Number to check.
 *
 * Return: 1 if prime, 0 if is not.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (number_cal(2, n));
}


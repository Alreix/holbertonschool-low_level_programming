#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase or uppercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase and uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c > 65) && (c < 90))
	{
		return (1);
	}
	else if ((c > 97) && (c < 122))
	{
		return (1);
	}
	return (0);
}

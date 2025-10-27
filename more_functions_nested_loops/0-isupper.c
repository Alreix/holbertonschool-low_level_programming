#include "main.h"
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Description: Check if a character is an uppercase.
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}

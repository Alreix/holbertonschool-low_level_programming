#include "main.h"
/**
 * _puts_recursion - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: 
 * Return: 1 if c is lowercase, 0 otherwise.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0' || *s == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	
	_puts_recursion(s + 1);
}

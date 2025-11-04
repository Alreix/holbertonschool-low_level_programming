#include "main.h"
/**
 * _puts_recursion - to prints a string, followed by new line.
 * @s: the pointer to 1st character of a string.
 *
 * Description: a function for prints a string with recursivity.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
		return;

	else
	{
		_putchar('\n');
	}

	_puts_recursion(s + 1);
}

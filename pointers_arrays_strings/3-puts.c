#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 * @str: pointer to the string to print
 *
 * Description: Outputs the characters of @str to stdout.
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}


#include "main.h"
/**
 * puts_half - to print half of a string.
 * @str: the string to cut.
 *
 * Description: print half of a string and print the second half.
 * Return: void.
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
	{
		n = (len + 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

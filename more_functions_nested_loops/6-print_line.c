#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: the number of _
 *
 * Description: draw a straight line int the terminal.
 * Return: void.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

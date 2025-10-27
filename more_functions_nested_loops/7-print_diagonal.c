#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of time the char \ should be print.
 *
 * Description: draws a diagonal line on the terminal.
 * Return: void.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
}


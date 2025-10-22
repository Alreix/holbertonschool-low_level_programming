#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times alphabet
 *
 * Description: Use while and for to print 10 times alphabet.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}


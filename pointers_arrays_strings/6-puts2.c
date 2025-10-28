#include "main.h"

/**
 * puts2 - puts every other character of a string if it is even.
 * @str: The string.
 *
 * Description: puts only even numbers.
 * Return: void.
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{

		if (len % 2 == 0)
		{
			_putchar(str[len]);

		}

		len++;
	}
	_putchar('\n');
}

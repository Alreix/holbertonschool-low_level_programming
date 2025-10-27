#include "main.h"
/**
 * print_triangle - to print triangle.
 * @size: the size of the triangle.
 *
 * Description: to print a triangle with # by size.
 * Return: void.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j > size - i)
			{
				_putchar('#');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}


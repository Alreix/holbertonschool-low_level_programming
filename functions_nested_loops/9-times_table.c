#include "main.h"
/**
 * times_tables - Print tables.
 * 
 *
 * Description: Print tables.
 * Return: void.
 */

void times_table(void)
{
	int l;
	int m;

	for (l = 0; l <= 9; l++)
	{

		for (m = 0; m <= 9; m++)
		{

			if (m * l <= 9)
			{
				if (m == 0)
				{
					_putchar(m * l + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(m * l + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m * l / 10 + '0');
				_putchar(m * l % 10 + '0');
			}
		}
		_putchar('\n');
	}
}


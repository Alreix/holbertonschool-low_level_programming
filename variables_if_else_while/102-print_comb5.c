#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)

			{
				if (i * 10 + j < k * 10 + l)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');


					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}

			}
		}
	}
	putchar('\n');
	return (0);
}

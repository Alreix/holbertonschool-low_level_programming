#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The parsed integer (sign handled).
 */

int _atoi(char *s)
{
	int res = 0;
	int n = 1;

	int INT_MAX = 2147483647;
	int INT_MIN = (-INT_MAX - 1);

	while (*s != '\0')
	{
		if (*s == '-')
			n = n * -1;

		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (n == 1)
			{
				if (res > (INT_MAX - digit) / 10)
					return (INT_MAX);
				res = res * 10 + digit;
			}
			else
			{
				if (res > (-(INT_MIN + digit)) / 10)
					return (INT_MIN);
				res = res * 10 - digit;
			}
		}
		else if (res != 0)
			break;

		s++;
	}
	return (res);
}

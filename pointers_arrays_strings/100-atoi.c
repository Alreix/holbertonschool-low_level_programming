#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The parsed integer (sign handled).
 */

int _atoi(char *s)
{
	int r = 0;
	int n = 1;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			r *= 10;
			r += *s - 48;
		}

		else if (*s == '-')
			n = n * -1;

		else if (r != 0)
			break;

		s++;
	}

	return (r * n);
}

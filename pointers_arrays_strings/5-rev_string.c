#include "main.h"
/**
 * rev_string - to reverse a string.
 * @s: the string.
 *
 * Description: to reverse a string.
 * Return: void.
 */

void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int rev = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	rev = len - 1;

	while (start < rev)
	{
		tmp = s[start];
		s[start] = s[rev];
		s[rev] = tmp;

		start++;
		rev--;
	}
}

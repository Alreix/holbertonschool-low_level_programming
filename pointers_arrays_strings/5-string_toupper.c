#include "main.h"
/**
 * *string_toupper - to changes all lowercase to uppercase.
 * @s: the string to modify.
 *
 * Description: to changes all lowercase to uppercase.
 * Return: a char.
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		*s -= 32;

		s++;
	}
	return (p);
}



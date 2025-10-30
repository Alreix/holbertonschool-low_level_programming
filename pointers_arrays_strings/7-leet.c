#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string to encode.
 *
 * Return: Pointer to the encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

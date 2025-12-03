#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Return: the number of characters in the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
			return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
			if (w == -1 || w != _strlen(text_content))
			{
				close(fd);
				return (-1);
			}
	}

	close(fd);
	return (1);
}

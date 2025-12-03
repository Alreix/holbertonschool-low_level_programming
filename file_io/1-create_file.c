#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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
 * create_file - Creates a file and writes a string to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

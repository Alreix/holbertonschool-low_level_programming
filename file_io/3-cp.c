#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_error_97 - Prints usage error message and exits with code 97
 *
 * Description: This function is called when the program is not given
 * the correct number of arguments.
 */
void print_error_97(void)
{
	 dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	 exit(97);
}

/**
 * print_error_98 - Prints read error message and exits with code 98
 * @filename: Name of the file that cannot be read
 *
 * Description: This function is called when a file cannot be read
 * (open or read failure).
 */
void print_error_98(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * print_error_99 - Prints write error message and exits with code 99
 * @filename: Name of the file that cannot be written to
 *
 * Description: This function is called when a file cannot be created
 * or written to.
 */
void print_error_99(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * print_error_100 - Prints close error message and exits with code 100
 * @fd: File descriptor that could not be closed
 *
 * Description: This function is called when closing a file descriptor
 * fails.
 */
void print_error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Copies the content of one file to another
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the argument strings
 *
 * Description: This program copies the content of file_from to file_to.
 * It handles errors when reading, writing, opening or closing files and
 * exits with specific status codes (97, 98, 99 or 100) depending on the
 * type of error.
 *
 * Return: 0 on success, or exits with the appropriate error code
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t r, w;
	char buffer[1024];

	if (argc != 3)
		print_error_97();

	fd1 = open(argv[1], O_RDONLY);
		if (fd1 == -1)
			print_error_98(argv[1]);

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
			if (fd2 == -1)
				print_error_99(argv[2]);

	while ((r = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd2, buffer, r);
			if (w == -1 || w != r)
			print_error_99(argv[2]);
	}

	if (r == -1)
		print_error_98(argv[1]);

if (close(fd1) == -1)
	print_error_100(fd1);

if (close(fd2) == -1)
	print_error_100(fd2);

return (0);
}

#include <stdio.h>

/**
 * main - print the program name.
 * @argc: the number of command line argument.
 * @argv: the array of pointer to the argument.
 *
 * Description : print the name of the executable.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

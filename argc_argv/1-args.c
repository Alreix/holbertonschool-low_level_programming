#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into line command
 * @argc: number of command-line arguments
 * @argv: array of pointers to the arguments
 *
 * Description: print the number of argument passed.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

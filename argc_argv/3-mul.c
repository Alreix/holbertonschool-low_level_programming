#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two number and print the result.
 * @argc: number of command-line arguments
 * @argv: array of pointers to the arguments
 *
 * Description: This program prints the result of multiplication.
 * Return: 0 on success, and 1 if the program not receive 2 arguments.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
	}

	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);

	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers from command line.
 * @argc: number of command-line arguments
 * @argv: array of pointers to the arguments
 *
 * Description: add all positive numbers given as args.
 * Return: 0 on success. 1 if is not a number (error).
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

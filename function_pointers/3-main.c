#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, res;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	f = get_op_func(s);

	if (f == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	res = f(a, b);
	printf("%d\n", res);

	return (0);
}

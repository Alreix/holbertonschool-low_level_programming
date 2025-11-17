#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function for an operation
 * @s: the operator passed as argument
 *
 * Return: pointer to the function matching the operator, or NULL
 */

int (*get_op_func(char *s))(int, int)
{
		 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if ((s != NULL || *s != '\0') && *s == ops[i][0])
	{
		return (get_op_func(ops[i]));
	}
	i++;

	return (NULL);
}

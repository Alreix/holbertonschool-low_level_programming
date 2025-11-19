#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a char from a va_list.
 * @ap: List of arguments.
 *
 * Return: Nothing.
 */
void print_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * print_int - Print a int from a va_list.
 * @ap: List of arguments.
 *
 * Return: Nothing.
 */
void print_int(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%d", i);
}

/**
 * print_float - Print a float from a va_list.
 * @ap: List of arguments.
 *
 * Return: Nothing.
 */
void print_float(va_list ap)
{
	double f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_str - Print a str from a va_list.
 * @ap: List of arguments.
 *
 * Return: Nothing.
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - Print values based on a format string.
 * @format: List of types of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list ap;

	char *separator = "";

	printer_t printer[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(ap, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (printer[j].sym != '\0')
		{
			if (format[i] == printer[j].sym)
			{
				printf("%s", separator);
				printer[j].print(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

/**
 * struct printer - Struct for type and function
 * @sym: Format symbol.
 * @print: Function to print this type.
 */
typedef struct printall
{
	char sym;
	void (*print)(va_list ap);

}printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);

#endif

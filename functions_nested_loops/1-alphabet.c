#include "main.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}

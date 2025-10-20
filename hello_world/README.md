HELLO WORLD

#1 gcc -E $CFILE -o c : that runs a C file through the preprocessor and save the result into another file.

#2 gcc -c $CFILE : that compiles a C file but does not link. (the output sorted in .o)

#3 gcc -s $CFILE :  that generates the assembly code of a C code and save it in an output file.

#4 gcc $CFILE -o cisfun : compiles a C file and creates an executable named cisfun.

#5 : A script that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. (With puts).

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

#6 : A program C that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line (with printf). 

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}


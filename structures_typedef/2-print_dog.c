#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints the information of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: This function prints the name, age, and owner
 * of a dog. If an element of the structure is NULL, it prints
 * (nil) instead of the missing information.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);

if (d->age < 0.0)
	printf("Age: (nil)\n");
else
	printf("Age: %f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);
}

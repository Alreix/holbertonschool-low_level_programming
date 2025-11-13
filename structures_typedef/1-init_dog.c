#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: the pointer of struct dog to initalize.
 * @name: the name of the dog (string).
 * @age: the age of the dog (float).
 * @owner: the owner of the dog (string).
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

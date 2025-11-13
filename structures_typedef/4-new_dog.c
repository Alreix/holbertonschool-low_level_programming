#include "dog.h"
#include <stdlib.h>

/**
 * *_strdup - copy a string and return a pointer to a newly space in memory
 * @str: the string to copy.
 *
 * Description: copy a string and return a pointer to a newly space.
 * Return: a pointer to the duplicated string or NULL.
 */

char *_strdup(char *str)
{
	int len = 0;
	char *tmp;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	len = len + 1;

	tmp = malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);

	cpy = tmp;

		while (*str != '\0')
		{
			*tmp = *str;
			tmp++;
			str++;
		}

		*tmp = '\0';
		return (cpy);
}

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: allocates memory for a new dog, duplicates name
 * and owner, and sets all fields. Frees memory if something fails.
 * Return: pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *copy_name;
	char *copy_owner;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	copy_name = _strdup(name);
	if (copy_name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	copy_owner = _strdup(owner);
	if (copy_owner == NULL)
	{
		free(copy_name);
		free(newDog);
		return (NULL);
	}

	newDog->name = copy_name;
	newDog->owner = copy_owner;
	newDog->age = age;

	return (newDog);
}

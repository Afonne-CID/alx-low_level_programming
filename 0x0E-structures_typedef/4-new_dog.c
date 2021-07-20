#include "dog.h"
#include <stdlib.h>

int _strlen(char *c);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculates length of string
 * @c: string to be calculated
 *
 * Return: String length
 */
int _strlen(char *c)
{
	int i;

	i = 0;
	while (*c++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string from a source to another destination
 * @dest: destination to be copied to
 * @src: source from to copy
 *
 * Return: the address of the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: returns struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *billy;

	billy = malloc(sizeof(dog_t));
	if (billy == NULL)
	{
		free(billy);
		return (NULL);
	}
	billy->name = malloc(sizeof(char) * ((_strlen(name)) + 1));
	if (billy->name == NULL)
	{
		free(billy);
		return (NULL);
	}
	billy->name = _strcpy(billy->name, name);

	billy->age = age;

	billy->owner = malloc(sizeof(char) * ((_strlen(owner)) + 1));
	if (billy->owner == NULL)
	{
		free(billy);
		return (NULL);
	}
	billy->owner = _strcpy(billy->name, owner);

	return (billy);
}

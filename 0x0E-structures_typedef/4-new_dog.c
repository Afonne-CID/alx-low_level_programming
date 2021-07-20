#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	
	billy->name = name;
	billy->age = age;
	billy->owner = owner;

	return (billy);
}

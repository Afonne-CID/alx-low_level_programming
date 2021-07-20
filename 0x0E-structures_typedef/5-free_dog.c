#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory previously allocated to dog
 * @d: pointer to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(name);
	free(age);
	free(owner);
	free(d);
}
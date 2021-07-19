#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: parameter 1
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
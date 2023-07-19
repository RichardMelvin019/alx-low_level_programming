#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a dog structure
 * @d: a dog structure
 * @name: dog name
 * @age: dog name
 * @owner: owner name
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}


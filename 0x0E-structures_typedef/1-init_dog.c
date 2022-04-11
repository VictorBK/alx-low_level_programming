#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

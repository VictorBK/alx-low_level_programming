#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int a = 0, b = 0, count;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[a] != '\0')
		a++;
	a++;
	(*d).name = malloc(sizeof(char) * a);
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (count = 0; count < a; count++)
		(*d).name[count] = name[count];

	(*d).age = age;

	while (owner[b] != '\0')
		b++;
	b++;
	(*d).owner = malloc(sizeof(char) * b);
	if ((*d).owner == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	for (count = 0; count < b; count++)
		(*d).owner[count] = owner[count];

	return (d);
}

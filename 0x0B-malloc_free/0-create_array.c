#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size pf array
 * @c: specific character
 * Return: pointer, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		arr[n] = c;

	return (arr);
}

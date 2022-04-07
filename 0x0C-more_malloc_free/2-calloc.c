#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: byte size of each element of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (n = 0; n < nmemb * size; n++)
		p[n] = 0;

	return (p);
}

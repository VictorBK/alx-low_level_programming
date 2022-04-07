#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: maximum number of s2 bytes to concantenate to s1
 * Return: NULL if function fails
 * Otherwise, return pointer to concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n >= b)
		n = b;

	p = malloc(sizeof(char) * (a + n + 1));

	if (p == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];

	for (b = 0; b < n; b++, a++)
		p[a] = s2[b];

	p[a] = '\0';

	return (p);
}

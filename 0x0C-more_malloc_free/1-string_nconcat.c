#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: maximum number of s2 bytes to concantenate to s1
 * Return: a string concantenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string that duplicates str
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 * Return: NULL if str is NULL
 * Return: NULL if insufficient memory found
 */

char *_strdup(char *str)
{
	char *a;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++);

	a = malloc(x * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		a[y] = str[y];
	a[y] = '\0';

	return (a);
}

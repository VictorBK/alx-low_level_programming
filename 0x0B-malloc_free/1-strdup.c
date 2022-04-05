#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to duplicae
 * Return: pointer to new duped string, or NULL if str is NULL, or mem was insufficient
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int x = 0;
	unsigned int y = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	x++;
	duplicate = malloc(x * sizeof(*duplicate));
	if (duplicate == NULL)
		return (NULL);
	while (y < x)
	{
		duplicate[y] = str[x];
		y++;
	}
	return (duplicate);
}

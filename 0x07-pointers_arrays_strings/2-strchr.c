#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a pointer to the first occurrence of c in string
 * @c: character to receive
 * @s: string to receive and return
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}

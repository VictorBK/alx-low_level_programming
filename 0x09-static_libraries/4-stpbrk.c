#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches for a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string that is to be matched
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int a = 0;
unsigned int b = 0;

for (a = 0; *(s + a) != '\0'; a++)
{
for (b = 0; *(accept + b) != '\0'; b++)
{
if (*(s + a) == *(accept + b))
return (s + a);
}
}
return (NULL);
}

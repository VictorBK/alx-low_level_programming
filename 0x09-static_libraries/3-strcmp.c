#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first input string
 * @s2: second input string
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++, s2++;
}
return (*s1 - *s2);
}

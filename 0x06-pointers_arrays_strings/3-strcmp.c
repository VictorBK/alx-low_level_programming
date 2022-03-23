#include "main.h"

/**
 * _strcmp - function to compare two strings
 * function should work exactly like strcmp
 * @s1: string to compare to s2
 * @s2: string to compare to s1
 *
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
int a;
int output;

a = 0;
while (*(s1 + a) == *(s2 + a) && *(s1 + a) != '\0')
a++;

output = (*(s1 + a) - *(s2 + a));

return (output);
}

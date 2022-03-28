#include "main.h"

/**
 * _strspn - function that gets length of prefix substring
 * @s: initial segment
 * @accept: the accepted bytes
 * Return: accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int x = 0;
int y = 0;
int counter = 0;

for (x = 0; s[x] != '\0'; x++)
{
if (counter != x)
break;

for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
counter++;
}
}
return (counter);
}

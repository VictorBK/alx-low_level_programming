#include "main.h"

/**
 * _atoi - function to convert a string into an integer
 * @s: input string to be converted
 * Return: the integer that is converted
 */

int _atoi(char *s)
{
int x;
int y, z;

y = 0;
z = -1;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == '-')
z *= -1;

if (s[x] > 47 && s[x] < 58)
{
if (y < 0)
y = (y * 10) - (s[x] - '0');
else
y = (s[x] - '0') * -1;

if (s[x + 1] < 48 || s[x + 1] > 57)
break;
}
}
if (z < 0)
y *= -1;

return (y);
}

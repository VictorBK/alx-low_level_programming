#include "main.h"

/**
 * _strcat - function that concantenates the two strings
 * @dest: destination string to be copied to
 * @src: source string to be appended to end of dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (*(dest + a) != '\0')
{
a++;
b++;
}

a = 0;
while (*(src + a) != '\0')
{
dest[b] = src[a];
a++;
b++;
}
dest[b] = '\0';
return (dest);
}

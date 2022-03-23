#include "main.h"

/**
 * _strncat - function that concantenates two strings
 * @dest: destination string to be concantenated to
 * @src: source string to be concantenated to dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int x = 0;
int y = 0;

while (*(dest + x) != '\0')
{
y++;
x++;
}

x = 0;
while (*(src + x) != *(src + n))
{
*(dest + y) = *(src + x);
x++;
y++;

}
*(dest + y) = '\0';

return (dest);
}

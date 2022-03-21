#include "main.h"

/**
 * _strcpy - copies string pointed by src to the buffer pointed by dest
 * copied function to include the termination null byte
 * @dest: pointer to destination char
 * @src: source char pointer
 * Return: dest data
 */

char *_strcpy(char *dest, char *src)
{
int x = 0;
int y = 0;

while (src[y])
y++;

for (x = 0; x <= y; x++)
{
dest[x] = src[x];
}
return (dest);
}

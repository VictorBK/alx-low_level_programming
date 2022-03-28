#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * memory area is pointed to by s with constant byte b
 * @s: pointer that points memory area
 * @b: constant to be filled with memory
 * @n: bytes of memory area that is to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
*(s + x) = b;
}
return (s);
}

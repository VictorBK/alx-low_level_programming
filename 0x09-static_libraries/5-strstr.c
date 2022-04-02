#include "main.h"

/**
 * _strstr - function that locates a string
 * Finds first occurence of substring needle in strinng haystack
 * Terminating null bytes are not compared
 * @haystack: initial string
 * @needle: substring
 * Return: pointer to beginning of located substring
 * NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*haystack != '\0' && *n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack = h + 1;
}
return (0);
}

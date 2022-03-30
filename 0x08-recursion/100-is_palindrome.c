#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int length;
length = get_length(s) - 1;
return (my_pal(s, --length));
}

/**
 * get_length - determines length of a string
 * s: string
 * Return: length of string
 */

int get_length(char *s)
{
if (*s == '\0')
return (1);
else
return (1 + get_length(++s));
}

/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if string is a palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
if (*s == *(s + l))
{
if (l <= 0)
return (1);
else
return (my_pal(++s, l - 2));
}
else
return (0);
}

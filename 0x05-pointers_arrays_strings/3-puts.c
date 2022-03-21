#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a newline to stdout
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
while (*str)

_putchar(*str++);
_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string, startng with the first character
 *
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i += 1;
}
_putchar('\n');
}

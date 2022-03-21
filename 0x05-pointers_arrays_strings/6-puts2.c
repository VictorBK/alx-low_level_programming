#include "main.h"

/**
 * puts2 - prints every other character of a string, startng with the first character
 * followed by a new line
 * @str: input string
 * Return: nothing
 */

void puts2(cha *str)
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

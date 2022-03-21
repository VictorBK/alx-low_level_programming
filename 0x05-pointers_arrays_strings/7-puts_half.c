#include "main.h"

/**
 * puts_half - prints half of a string, followed by new line
 * function to print second half of the string
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
int i = 0;
int j = 0;

while (str[i] != '\0')
i += 1;

j = i / 2;
if (i % 2 == 1)
j += 1;
while (str[j] != '\0')
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}

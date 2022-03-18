#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{


int i;
int z;
int d;
int p;

if (size > 0)
{
y = size - 1;
for (w = 0; w < size ; w++)
{
for (x = y; x > 0 ; x--)
{
_putchar (' ');
}

for (z = 0; z <= w; z++)
{
_putchar (35);
}

y--;

_putchar ('\n');


}

}

else
{
_putchar ('\n');
}
}

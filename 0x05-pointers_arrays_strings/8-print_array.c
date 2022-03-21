#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 * @a: pointer of first int
 * @n: pointer of second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
int x = 0;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x < n - 1)
printf(", ");
}
printf("\n");
}

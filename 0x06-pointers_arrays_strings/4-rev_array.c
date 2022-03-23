#include "main.h"

/**
 * reverse_array - function that reverses content of array of integers
 * @a: array
 * @n: the size of array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int x;
int y;
int z;

for (x = 0, y = (n - 1); x < y; x++, y--)
{
z = a[x];
a[x] = a[y];
a[y] = z;
}
}

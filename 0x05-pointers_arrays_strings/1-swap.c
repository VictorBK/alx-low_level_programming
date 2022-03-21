#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: - first integer pointer.
 * @b: - second integer pointer.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}

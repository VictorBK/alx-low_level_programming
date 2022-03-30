#include "main.h"

/**
 * find_root - function that gets the num of square root
 * @num: input number
 * @c: counter variable
 * Return: int
 */

int find_root(int num, int c)
{
if (num == (c * c))
return (c);
else if (num > (c * c))
return (find_root(num, c + 1));
else
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * if n does not have natural square root, return -1
 * @n: input number
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (find_root(n, 1));
}

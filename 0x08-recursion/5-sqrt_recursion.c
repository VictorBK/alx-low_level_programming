#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * if n does not have a natural square root, return -1
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
return (getNumSqr(n, 1));
}

/**
 * getNumSqr - function that determines number of squareroot
 * @num: input number
 * @c: counter variable
 * Return: int
 */

int getNumSqr(int num, int c)
{
if (num == (c * c))
return (c);
if (num > (c * c))
return (getNumSqr(num, c + 1));
else
return (-1);
}

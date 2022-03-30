#include "main.h"
/**
 * factorial - function to return factorial of a given number
 * if n is lower than 0, function should return -1
 * -1 indicates an error
 * factorial of 0 is 1
 * @n: input number
 * Return: factorial of the number
 */

int factorial(int n)
{
if (n<0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n -1));
}

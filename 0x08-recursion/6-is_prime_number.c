#include "main.h"

/**
 * is_prime - divides by higher divisor while skipping even numbers
 * @n: number to be checked
 * @divisor: divisor
 * Return: 1 if number is prime, 0 if it is not, recursive function call
 */

int is_prime(int n, int divisor)
{
if (n == divisor)
return (1);
if (n % divisor == 0)
return (0);
return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if number is prime, 0 if not
 */

int is_prime_number(int n)
{
int divisor = 3;

if (n % 2 == 0 || n < 2)
return (0);
if (n == 2)
return (1);

return (is_prime(n, divisor));
}

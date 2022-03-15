#include <stdio.h>

/**
 * _islower - funtion to check lowercase character
 *
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int x)
{
if (x >= 'a' && x <= 'z')
return (1);
else
return (0);
}

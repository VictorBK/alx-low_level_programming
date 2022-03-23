#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * a and A to be replaced by 4
 * e and E to be replaced by 3
 * o and O to be replaced by 0
 * t and T to be replaced by 7
 * l and L to be replaced by 1
 * only one if to be used in code
 * only two loops to be used in code
 * switch not allowed
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
int m = 0;
int n;

char let[] = "aAeEoOtTlL";
char num[] = "4433007711";

while (*(s + m) != '\0')
{
for (n = 0; n <= 9; n++)
{
if (let[n] == s[m])
{
s[m] = num[n];
}
}
m++;
}
return (s);
}

#include <stdio.h>
/**
 * main - program for all possible different combination of two digits
 * putchar only 5 times
 * Return: 0
 */
int main(void)
{
int n1 = 48;
int n2;
int comb = 44;
while (n1 <= 57)
{
n2 = n1 + 1;
while (n2 <= 57)
{
putchar(n1);
putchar(n2);
if (n1 != 56 || n2 != 57)
{
putchar(comb);
putchar(32);
}
n2 += 1;
}
n1 += 1;
}
putchar('\n');
return (0);
}

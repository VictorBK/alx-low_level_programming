#include <stdio.h>
/**
 * main - program for all possible different combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
int d1 = 48;
int d2;
int com = 44;
while (d1 <= 57)
{
d2 = d1 + 1;
while (d2 <= 57)
{
putchar(d1);
putchar(d2);
if (d1 != 56 || d2 != 57)
{
putchar(com);
putchar(32);
}
d2 += 1;
}
d1 += 1;
}
putchar('\n');

return (0);
}
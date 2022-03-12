#include <stdio.h>
/**
 * main - program to print all possible combinations of single-digit
 * Only use putchar
 * Return: 0
 */

int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);

if (n == 57)
{
break;
}

putchar(',');
putchar (' ');
}

putchar('\n');

return (0);

}

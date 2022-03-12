#include <stdio.h>
/**
 * main - program to print all possible combinations of two two-digit numbers
 * only use putchar eight times
 * Return: 0
 */
int main(void)
{
int c1 = 48;
int x = 0;
int y;
int com = 44;

while (x <= 99)
{
y = x + 1;
while (y <= 99)
{
putchar((x / 10) + c1);
putchar((x % 10) + c1);
putchar(32);
putchar((y / 10) + c1);
putchar((y % 10) + c1);
if (x != 98 || y != 99)
{
putchar(com);
putchar(32);
}
y += 1;
}
x += 1;
}
putchar('\n');
return (0);
}

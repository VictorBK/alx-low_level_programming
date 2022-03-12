#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of three digits
 * only smallest combination
 * Return: 0 (Success)
 */
int main(void)
{
int z1 = 48;
int z2, z3;
int com = 44;

while (z1 <= 57)
{
z2 = z1 + 1;
while (z2 <= 57)
{
z3 = z2 + 1;
while (z3 <= 57)
{
putchar(z1);
putchar(z2);
putchar(z3);
if (z1 != 55 || z2 != 56 || z3 != 57)
{
putchar(com);
putchar(32);
}
z3 +=1;
}
z2 +=1;
}
z1 +=1;
}
putchar('\n');
return (0);
}

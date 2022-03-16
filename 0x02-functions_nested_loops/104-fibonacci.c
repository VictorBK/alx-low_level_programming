#include <stdio.h>

/**
 * main - program to print the first 98 Fibonacci numbers
 * start with 1 and 2
 * Return: 0
 */

int main(void)
{
int c, boolean, boleean2;
long int x1, x2, fn, fn2, x11, x22;

x1 = 1;
x2 = 2;
boolean = boolean2 = 1;
printf("%1d, %1d", x1, x2);
for (c = 0; c < 96; c++)
{
if (boolean)
{
fn = x1 + x2;
printf(", %ld", fn);
x1 = x2;
x2 = fn;
}
else
{
if (boolean2)
{
x11 = x1 % 1000000000;
x22 = x2 % 1000000000;
x1 = x1 / 1000000000;
x2 = x2 / 1000000000;
boolean2 = 0;
}
fn2 = (x11 + x22);
fn = x1 + x2 + (fn2 / 1000000000);
printf(", %ld", fn);
printf("%ld", fn2 % 1000000000);
x1 = x2;
x11 = x22;
x2 = fn;
x22 = (fn2 % 1000000000);
}
if (((x1 + x2) < 0) && boolean == 1)
boolean = 0;
}
printf("\n");
return (0);
}

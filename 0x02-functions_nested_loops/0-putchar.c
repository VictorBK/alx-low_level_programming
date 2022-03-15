#include "_putchar.h"

/**
 * main - program that prints _putchar
 * 
 * Return: int
 */

int main(void)
{
int x = 0;
char str_ptc[8] = "_putchar";
while (x < 8)
{
_putchar(str_ptc[x]);
x += 1;
}
_putchar('\n');
return (0);

#include <stdio.h>
/**
 * main - lowercase alphabet except q and e
 * only use putchar twice
 * Return: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}

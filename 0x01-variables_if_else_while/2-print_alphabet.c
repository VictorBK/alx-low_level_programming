#include <stdio.h>
/**
 * main - alphabet in lower case then new line
 * only use putchar
 * Return: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - program that prints all numbers of base 16 in lowercase
 * only use putchar
 * Return: 0
 */
int main(void)

{
char b;

for (b = 48; b <= 57; b++)
{
putchar(b);
}

for (b = 97 ; b <= 102; b++)
{
putchar(b);
}

putchar ('\n');

return (0);

}

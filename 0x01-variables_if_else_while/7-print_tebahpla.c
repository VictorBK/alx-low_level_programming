#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse followed by a new line
 * only use putchar
 * Return: 0
 */

int main(void)
{
char v;

for (v = 122 ; v >= 97; v--)
{
putchar(v);
}

putchar('\n');

return (0);

}

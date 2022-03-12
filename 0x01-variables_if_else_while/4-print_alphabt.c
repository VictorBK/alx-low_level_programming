#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Only putchar to be used
 * Return: 0 (Success)
 */

int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
if (n == 'q')
continue;

else if (n == 'e')
continue;

putchar(n);
}

putchar('\n');

return (0);

}

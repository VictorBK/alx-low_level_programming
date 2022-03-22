#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main – program to generate random valid passwords
 *
 * Return: 0
 */

int main(void)
{
char x[300];
int num = 0;
int randomizer = 0;
char *key = x;

srand(time(NULL));

while (num < 3000)
{
randomizer = rand() % 122;

if (randomizer > 32)
{
*key = randomizer;
key = key + 1;
num += randomizer;
}
}

*key = (2772 - num);
*(key + 1) = '\n';
printf("%s", x);
return (0);
}

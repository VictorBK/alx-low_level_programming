#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - program that generates random valind passwords
 * The passwords are for the program 101-crackme
 * man srand, rand, time
 * gdb and objdump can help
 * Return: 0 (Success)
 */

void randomPasswordGeneration(int P)
{
int x = 0;
int random = 0;

srand((unsigned int)(time(NULL)));

char numbers[] = "0123456789";
char letter[] = "abcdefghijklmnopqrstuvwxyz";
char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char symbols[] = "£$%^&*?#~!";
char password[P];
random = rand() %4;

for (x = 0; x < P; x++)
{
if (random == 1)
{
password[x] = numbers[rand() % 10];
random = rand() %4;
printf("%c", password[x]);
}
else if (random == 2)
{
password[x] = symbols[rand() % 10];
random = rand() %4;
printf("%c", password[x]);
}
else if (random == 3)
{
password[x] = LETTER[rand() % 26];
random = rand() %4;
printf("%c", password[x]);
}
else
{
password[x] = letter[rand() % 26];
random = rand() %4;
printf("%c", password[x]);
}
}
}

int main()
{
int P = 10;

randomPasswordGeneration(P);

return (0);
}

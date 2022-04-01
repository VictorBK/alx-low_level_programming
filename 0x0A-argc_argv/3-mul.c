#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print product of numbers in argument
 * @argc: argument count
 * @argv: an array of size argc
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}

else

printf("Error\n");

return (1);
}

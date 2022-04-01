#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments passed to it
 * @argc: counts arguments
 * @argv: arguments to be counted
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}

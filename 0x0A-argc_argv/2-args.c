#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments that it receives
 * @argc: argument count
 * @argv: an array of size argc
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

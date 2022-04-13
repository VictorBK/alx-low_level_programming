#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print opcodes of its own main function
 *
 * @argc: count of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", arr[i]);
	printf("%02hhx\n", arr[i]);
	return (0)
		;
}

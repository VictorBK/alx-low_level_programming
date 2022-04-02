#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum no of coins to be made
 * as change for a certain amount of money
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int amount, coins;

	/* we need to validate input */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* parse the parameter passed to the program */
	amount = atoi(argv[1]);
	coins = 0;
	if (amount > 25)
	{
		while (amount >= 25)
			amount -= 25, coins++;
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
			amount -= 10, coins++;
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
			amount -= 5, coins++;
	}
	if (amount > 2 && amount < 5)
	{
		while (amount >= 2)
			amount -= 2, coins++;
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

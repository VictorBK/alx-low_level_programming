#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int to be converted
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}



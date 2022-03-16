#include "holberton.h"

/**
 * print_alphabet_x10 - function to print the alphabet 10 times,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int x;
	int n = 0;

	while (n < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(l);
			x += 1;
		}
		_putchar(10);
		n += 1;
	}
}

#include "main.h"

/**
 * get_endianness - checks if the endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}


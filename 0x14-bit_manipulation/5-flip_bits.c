#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get one number to another
 * @n: number to flip from
 * @m: number to flip to
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* XOR both numbers to show bit 1 if bits are different */
	difference = n ^ m;

	/* keep shifting difference to right while tallying */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
	(difference > 0);

	return (diff_bits);
}


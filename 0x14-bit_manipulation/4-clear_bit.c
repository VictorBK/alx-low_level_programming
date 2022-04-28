#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to work on
 * @index: bit index
 * Return: 1 if success, or -1 if error found
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* validate that the index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 0 at index (..11011..) to work on the index */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}


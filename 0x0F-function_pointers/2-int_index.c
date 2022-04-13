#include <stddef.h>

/**
 * int_index - Function that searches for an integer
 * @array: Array to be checked
 * @size: Size of the array
 * @cmp: Compares values
 * Return: the index of the first element if is true or -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != 0 && cmp != 0)
	{
		if (size <= 0)
			return (-1);

	/* iterate through array and call searching function */
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x])) /* if returned true */
				return (x);
		}
	}
	/* If element not found */
	return (-1);
}

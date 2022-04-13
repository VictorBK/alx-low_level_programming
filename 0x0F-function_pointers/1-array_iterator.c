#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != 0 && size >= 1 && action != 0)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}

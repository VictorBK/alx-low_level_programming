#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all elements of a list_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current  = current->next;
		count++;
	}
	return (count);
}


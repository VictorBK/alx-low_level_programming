#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (i < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		i++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}


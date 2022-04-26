#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *element1, *element2;

	if (head == NULL)
		return (NULL);

	element1 = element2 = head;
	do {
		if (element1->next)
			element1 = element1->next;
		else
			return (NULL);

		if (element2->next->next)
			element2 = element2->next->next;
		else
			return (NULL);
	} while (element2 != element1);

	element1 = head;
	while (element2 != element1)
	{
		element2 = element2->next;
		element1 = element1->next;
	}

	return (element1);
}

